/*4.31 (Diamond-Printing Program) Write a program that prints the following diamond shape.
You may use printf statements that print either a single asterisk ( * ) or a single blank. Maximize
your use of iteration (with nested for statements) and minimize the number of printf statements.*/
#include <stdio.h>
int main() {
  int x,i,i2=1,t,j,a=1,r=1;
  printf("Sayı girin: ");
  scanf("%d",&x);
  t=((2*x-1)-1)/2;
  i=t;
  for ( j= 0; j <x; j++) {
    while (a<=i) {
      printf(" ");
      a++;
    }
    while (r<=i2) {
      printf("*");
      r+=1;
    }
    i2+=2,i--,r=1,a=1;
    printf("\n");
  }
  i=1,i2=2*x-3;
  for ( j= 0; j <x-1; j++) {
    a=1;
    while (a<=i) {
      printf(" ");
      a++;
    }
    r=i2;
    while (r>0) {
      printf("*");
      r-=1;
    }
    i2-=2,i++,a=0;
    printf("\n");
  }
  return 0;
}
