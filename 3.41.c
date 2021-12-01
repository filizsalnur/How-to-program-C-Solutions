/*3.41 (Diameter, Circumference and Area of a Cirle) Write a program that reads the radius of a
circle (as a float value) and computes and prints the diameter, the circumference and the area. Use
the value 3.14159 for π .*/
#include <stdio.h>
int main() {
  int r;//r:yarıçap
  float a,c,pi; //a:alan-c:çevre-p:pi sayısı
  pi=3.14159;
  printf("Çemberin Yarıçapını girin: ");
  scanf("%d",&r);
  c=2*(pi*(float)r);
  a=(pi*(float)r)*(pi*(float)r);
  printf("Alan:%f\nÇevre:%f\n",a,c );
  return 0;
}
