//WHİLE
/*4.12 (Prime Numbers) Write a program to calculate and print a list of all prime numbers from
1 to 100.*/
#include <stdio.h>
int main() {
  int a,b,c;
  a=1,b=1,c=0;
  while (a<=100) {
    while (b<=a) {
      if (a%b!=0) {
        ++c;
      }
      b=b+1;
    }
    if (c==(a-2)) {
      printf("%-4d",a);
    }
    b=1,a=a+1,c=0;
  }
  printf("\n");
  return 0;
}
