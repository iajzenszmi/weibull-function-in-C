#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Weibull distribution function
double weibull(double x, double a, double b) {
 double gamma = (a * exp(-x / b));
 return (1.0 - gamma);
}

int main() {
 double a, b;
 double x, y;

 printf("Enter the values of a and b: ");
 scanf("%lf %lf", &a, &b);

 printf("Enter the value of x: ");
 scanf("%lf", &x);

 y = weibull(x, a, b);
 printf("The value of the Weibull distribution at x is: %lf\n", y);

 return 0;
}
