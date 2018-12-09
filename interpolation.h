#ifndef INTERPOLATION_H
#define INTERPOLATION_H

/* Function arguments:
 * - x  =>  input: function domain,
 * - fx =>  input: set of function values,
 * - number_x   =>  input: domain size,
 * - z  =>  input: function domain,
 * - fz =>  output: set of function values,
 * - number_z   =>  input: domain size
 *
 * Function finds the resolution of polynomial interpolation.
 * Example:
 *
 * x={0,1,2}
 *
 * f(0)=0
 * f(1)=5
 * f(2)=2
 *
 * f(x)=a(x-1)(x-2)+b(x-0)(x-2)+c(x-0)(x-1)
 *
 * a=f(0)/(x-1)(x-2)= 0
 * b=f(1)/(x-0)(x-2)= -5
 * c=f(2)/(x-0)(x-1)= 1
 *
 * f(x)= -5(x-0)(x-2)+(x-0)(x-1)
 *
 * z={1,3}
 * f(1)= 5
 * f(3)= -9
 *
 */

void interpolation(double x[], double fx[], size_t number_x, double z[], double fz[], size_t number_z);

#endif
