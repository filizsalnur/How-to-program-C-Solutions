//WHİLE
/*4.11 (Calculating the Sum of Multiples) Write a program to calculate and print the sum of all
multiples of 7 from 1 to 100.*/
#include <stdio.h>
int main() {
  int a=1,top=0;
  while (a<=100) {
    if (a%7==0) {
      printf("%-3d",a );
      top+=a; //top=top+a
    }
    ++a;
  }
  printf("\n");
  printf("Toplam: %d\n",top );
  return 0;
}
