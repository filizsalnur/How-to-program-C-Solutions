/*3.25 (Tabular Output) Write a program that utilizes looping to produce the following table of
values:
A A+3 A+6 A+9*/
#include <stdio.h>
int main() {
  int x,a; //x:input a:sayaç
  printf("Sayıyı girin(A):" );
  scanf("%d",&x );
  printf("A   A+3 A+6 A+9\n");
  a=1;
  while (a<6) {
    printf("%-4d",a*x);
    printf("%-4d",a*(x+3));
    printf("%-4d",a*(x+6));
    a++,printf("%-4d\n",a*(x+9));
  }
  return 0;
}
