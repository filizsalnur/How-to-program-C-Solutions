//WHİLE
/*4.13 (Natural Numbers Arithmetic) Write a program that prints the sum, the sum of the
squares, and the sum of the cubes of all natural numbers from 1 till any number entered by the user.*/
#include <stdio.h>
int main() {
  int a,x,top1,top2; //top1=kareler toplamı, top2=küpler toplamı, x:input ,a=sayaç
  printf("Son degeri girin: " );
  scanf("%d",&x );
  a=1,top1=0,top2=0;
  while (a<=x) {
    top1+=a*a;
    top2+=a*a*a;
    ++a;
  }
  printf("1'den %d'ye kadar olan sayıların,\n",x);
  printf("Kareleri toplamı: %d\nKüpleri toplamı: %d\n",top1,top2);
  return 0;
}
