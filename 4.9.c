/*4.9 (Sum and Average of Integers) Write a program to sum a sequence of integers and calcu-
late their average. Assume that the first integer read with scanf specifies the number of values to
be entered. Your program should read only one value each time scanf is executed. A typical input
sequence might be*/
#include <stdio.h>
int main() {
  int top,a1,a2,x;
  float ort;
  top=0;
  scanf("%d",&a2);
  for (a1=1; a1<=a2; a1++) {
    scanf("%d",&x );
    top+=x;
  }
  ort=(float)top/a2;
  printf("Toplam:%d\nOrtalama:%f\n",top,ort );
  return 0;
}
