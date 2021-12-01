/* 2.30 (Separating Digits in an Integer) Write a program that inputs one five-digit number, sep-
arates the number into its individual digits and prints the digits separated from one another by three
spaces each. [Hint: Use combinations of integer division and the remainder operation.] For exam-
ple, if the user types in 42139, the program should print */
#include <stdio.h>
int main() {
  int x;
  int a1,a2,a3,a4,a5;
  printf("Bir adet beş basamaklı sayı giriniz.\n" );
  scanf("%d",&x);
  a5=x%10;
  a4=((x%100)-a5)/10;
  a3=((x%1000)-a4)/100;
  a2=((x%10000)-a3)/1000;
  a1=(x-a2)/10000;
  printf("%d   %d   %d   %d   %d\n",a1,a2,a3,a4,a5 );
  return 0;
}
