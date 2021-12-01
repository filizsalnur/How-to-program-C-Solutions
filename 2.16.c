/*2.16 (Arithmetic) Write a program that asks the user to enter two numbers, obtains them from
the user and prints their sum, product, difference, quotient and remainder.*/
#include <stdio.h>
int main() {
  int a,b,sum,carp,bol,eksi;
  printf("İlk değeri giriniz:");
  scanf("%d", &a);
  printf("İkinci değeri giriniz:");
  scanf("%d", &b);
  //toplama işlemi:
  sum=a+b;
  printf("%d+%d=%d\n",a,b,sum);
  //çıkarma işlemi:
  eksi=a-b;
  printf("%d-%d=%d\n",a,b,eksi );
  //çarpma işlemi:
  carp=a*b;
  printf("%dx%d=%d\n",a,b,carp );
  //bölme işlemi:
  bol=a/b;
  printf("%d:%d=%d\n",a,b,bol );

  return 0;
}
