#include <stdio.h>
#include <stdlib.h>
#include "interpolation.h"

void interpol(double *x, double *fx, int number_x, double *z, double *fz, int number_z) {
	
	double *parameter,equation,mull;
	int i,j,k;
	parameter=(double*)malloc(number_x*sizeof(double));
	
	//Calculations phase of parameters
	for(i=0;i<number_x;i++)
	{
		mull=1;
		for(j=0;j<number_x;j++)
		{
			if(j==i)
			continue;
			
			mull*=(x[i]-x[j]);
		}	
		parameter[i]=fx[i]/mull;
	}
	
	//Substitution phase
	for(k=0;k<number_z;k++)
	{
		equation=0;
		for(i=0;i<number_x;i++)
		{
			mull=parameter[i];
			for(j=0;j<number_x;j++)
			{
				if(j==i)
				continue;
				
				mull*=(z[k]-x[j]);
			}
			equation+=mull;		
		}
		fz[k]=equation;
	}
	
	free(parameter);
	return 0;
	
}
