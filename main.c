	
	#include "interpolation.h"
	#include <stdio.h>
       	int main()
       	{
	double x[] = {1,2,3};
	double fx[] = {1,2,3};
	size_t number_x = 3;
	double z[] = {1.5, 2.5};
	double fz[2];
        size_t number_z = 2;
	interpolation(x, fx, number_x, z, fz, number_z);
	return 0;
	}
