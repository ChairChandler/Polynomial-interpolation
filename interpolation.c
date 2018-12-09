#include <stdlib.h>
#include "interpolation.h"

static inline void calculation(double x[], double fx[], size_t number_x, double parameter[]);
static inline void substitution(double x[], size_t number_x, double parameter[], double z[], double fz[], size_t number_z);



void interpolation(double x[], double fx[], size_t number_x, double z[], double fz[], size_t number_z)
{
	
    double *parameter;
    parameter=(double*)malloc((size_t)number_x * sizeof(double));
	
    calculation(x, fx, number_x, parameter);
    substitution(x, number_x, parameter, z, fz, number_z);
	
	free(parameter);
}

static inline void calculation(double x[], double fx[], size_t number_x, double parameter[])
{
    double mullResult;
    for(size_t actualX=0; actualX<number_x; actualX++)
    {
        mullResult=1;

        for(size_t anotherX=0; anotherX<number_x; anotherX++)
        {
            if(actualX==anotherX)
                continue;
            else
                mullResult=mullResult * (x[actualX]-x[anotherX]); // (x-x2)*(x-x3)*(x-x4)
        }
        parameter[actualX]=fx[actualX]/mullResult; // f(x)=A(x-x2)(x-x3)(x-x4) -> A=f(x)/(x-x2)(x-x3)(x-x4)
    }
}

static inline void substitution(double x[], size_t number_x, double parameter[], double z[], double fz[], size_t number_z)
{
    double equationResult, mull;
    for(size_t k=0; k<number_z; k++)
    {
        equationResult=0;

        for(size_t actualX=0; actualX<number_x; actualX++)
        {
            mull=parameter[actualX];
            for(size_t anotherX=0; anotherX<number_x; anotherX++)
            {
                if(actualX==anotherX)
                    continue;
                else
                    mull=mull * (z[k]-x[anotherX]); // A(x-x2)(x-x3)
            }
            equationResult=equationResult + mull; // A(x-x2)(x-x3)+B(x-x1)(x-x3)+...
        }
        fz[k]=equationResult;
    }
}
