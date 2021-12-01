//WHİLE
/*4.10 (Conversion Celsius to Fahrenheit) Write a program that converts temperatures from 30 ° C
to 50 ° C to the Fahrenheit scale. The program should print a table displaying temperatures in the
two scales side by side. [Hint: ° F = 9/5C + 32]*/
#include <stdio.h>
int main() {
  int c;
  float f;
  c=30;
  while (c<=50) {
    f=((9.00*(float)c)/5.00)+32;
    printf("C=%-4dF=%.2f\n",c,f );
    ++c;
  }
  return 0;
}
