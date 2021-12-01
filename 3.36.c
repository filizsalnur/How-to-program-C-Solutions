/*3.36 (Armstrong Numbers) Armstrong numbers are numbers that are equal to the sum of their dig-
its raised to power of the number of digits in them. The number 153, for example, equals 1 3 + 5 3 + 3 3 .
Thus it is an Armstrong number. Write a program to display all three-digit Armstrong numbers.*/
#include <stdio.h>
int main() {
  int x,a1,a2,a3; //x:input a:basamak değerleri
  printf("Üç haneli bir sayı giriniz.\n" );
  scanf("%d",&x );
  a1=x%10;
  a2=((x%100)-a1)/10;
  a3=(x-a2)/100;
  if ((a1*a1*a1)+(a2*a2*a2)+(a3*a3*a3)==x) {
    printf("%d Armstrong sayısıdır.\n",x);
  }
  else{
    printf("%d Armstrong sayısı değildir.\n",x);
  }
  return 0;
}
