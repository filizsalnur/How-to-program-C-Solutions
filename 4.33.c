/*4.33 (Roman-Numeral Equivalent of Decimal Values) Write a program that prints a table of all
the Roman-numeral equivalents of the decimal numbers in the range 1 to 100.*/
#include <stdio.h>
int main() {
  int x,a1,a2,a3,a4;
  printf("Sayıyı giriniz(1-1000): ");
  scanf("%d",&x);
  a1=x%10;
  a2=(x-a1)%100;
  a3=(x-a1-a2)%1000;
  a4=(x-a1-a2-a3)%10000;
  if (a4==1) {
    printf("M-" );
  }
  switch (a3) {
    case 100:
      printf("C");
      break;
    case 200:
      printf("CC");
      break;
    case 300:
      printf("CCC");
      break;
    case 400:
      printf("CD");
      break;
    case 500:
      printf("D");
      break;
    case 600:
      printf("DC");
      break;
    case 700:
      printf("DCC");
      break;
    case 800:
      printf("DCCC");
      break;
    case 900:
      printf("CM");
      break;
  }
  if (a3!=0 && (a2!=0||a1!=0)) {
    printf("-");
  }
  switch (a2) {
    case 10:
      printf("X");
      break;
    case 20:
      printf("XX");
      break;
    case 30:
      printf("XXX");
      break;
    case 40:
      printf("XL");
      break;
    case 50:
      printf("L");
      break;
    case 60:
      printf("LX");
      break;
    case 70:
      printf("LXX");
      break;
    case 80:
      printf("LXXX");
      break;
    case 90:
      printf("XC");
      break;
  }
  if (a2!=0 && a1!=0) {
    printf("-" );
  }
  switch (a1) {
    case 1:
      printf("I");
      break;
    case 2:
      printf("II");
      break;
    case 3:
      printf("III");
      break;
    case 4:
      printf("IV");
      break;
    case 5:
      printf("V");
      break;
    case 6:
      printf("VI");
      break;
    case 7:
      printf("VII");
      break;
    case 8:
      printf("VIII");
      break;
    case 9:
      printf("IX");
      break;
  }
  printf("\n" );
  return 0;
}
