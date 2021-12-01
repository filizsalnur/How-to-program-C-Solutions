/*3.32 (Square of Asterisks) Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For
example, if your program reads a size of 4, it should print*/
#include <stdio.h>
int main() {
  int a,b;//yükseklik-genişlik
  int x1,x2;//sayaç
  printf("Dikdörtgeninizin yüksekliği kaç birim?\n");
  scanf("%d",&a);
  printf("Dikdörtgeninizin genişliği kaç birim?\n");
  scanf("%d",&b);
  x1=a,x2=b;
  while (0<x1) {
    while (0<x2) {
      printf("* "),x2--;
    }
    --x1,x2=b;
    printf("\n");
  }
  return 0;
}
