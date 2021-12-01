/*2.19 (Arithmetic, Largest Value and Smallest Value) Write a program that inputs three different
integers from the keyboard, then prints the sum, the average, the product, the smallest and the larg-
est of these numbers. Use only the single-selection form of the if statement you learned in this chap-
ter.*/
#include <stdio.h>
int main() {
  int max,min,x,a;
  printf("Üç adet değer giriniz\n" );
  scanf("%d %d %d",&max,&min,&x );
  printf("Sum is %d\n",(x+max+min));
  //ortalama:
  printf("Average is %d\n", ((x+min+max)/3));
  //çarpım:
  printf("Product is %d\n", (min*max*x));
  if (max<min) {
    a=max;
    max=min;
    min=a;
  }
  if (x<min) {
    a=x;
    x=min;
    min=a;
  }
  if (max<x) {
    a=max;
    max=x;
    x=a;
  }
  printf("Smallest is %d\n",min);
  printf("Largest is %d\n",max);
  return 0;
}
