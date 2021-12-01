/*5.15 (Hypotenuse Calculations) Define a function called hypotenuse that calculates the length
of the hypotenuse of a right triangle when the other two sides are given. The function should take
two arguments of type double and return the hypotenuse as a double . */
#include <stdio.h>
#include <math.h>
double hypotenuse(double,double);
int main() {
  double a,b,c;
  scanf("%lf\n%lf",&a,&b );
  c=hypotenuse(a,b);
  printf("%.2lf\n",c );
  return 0;
}
double hypotenuse(double a,double b){
  return sqrt(((a*a)+(b*b)));
}
