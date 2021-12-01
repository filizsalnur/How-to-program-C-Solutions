/*2.17 (Final Velocity) Write a program than asks the user to enter the initial velocity and acceler-
ation of an object, and the time that has elapsed, places them in the variables u , a , and t , and prints
the final velocity, v , and distance traversed, s , using the following equations. */
#include <stdio.h>
int main() {
  int u,a,t,v,s;
  printf("u=" );
  scanf("%d",&u);
  printf("a=" );
  scanf("%d",&a);
  printf("t=" );
  scanf("%d",&t);
  v=u+(a*t);
  s=(u*t)+1/2*(a*t*t);
  printf("v=%d\ns=%d\n",v,s );
  return 0;
}
