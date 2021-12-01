/*3.33 (Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.32 so that it
prints a hollow square. For example, if your program reads a size of 5, it should print*/
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
      if (x1==1) {
        printf("* "),x2--;
      }
      else if (x1==a) {
        printf("* "),x2--;
      }
      else{
        if (x2==1) {
          printf("* "),x2--;
        }
        else if (x2==b) {
          printf("* "),x2--;
        }
        else{
          printf("  "),x2--;
        }
      }
    }
    --x1,x2=b;
    printf("\n");
  }
  return 0;
}
