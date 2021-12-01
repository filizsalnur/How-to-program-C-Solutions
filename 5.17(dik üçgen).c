/*5.17 (Sides of a Right Triangle) Write a function that reads three nonzero integers and deter-
mines whether they are the sides of a right-angled triangle. The function should take three integer
arguments and return 1 (true) if the arguments comprise a right-angled triangle, and 0 (false) oth-
erwise. Use this function in a program that inputs a series of sets of integers.*/
#include <stdio.h>
int kontrol(int,int,int);
int dik(int,int,int);
int main() {
  int x1,x2,x3;
  printf("Üçgenin kenar uzunluklarını girin: ");
  scanf("%d\n%d\n%d",&x1,&x2,&x3);
  if (kontrol(x1,x2,x3)==1) {
    printf("%d\n",dik(x1,x2,x3) );
  }
  else if (kontrol(x1,x2,x3)==0){
    printf("Girdiğiniz değerler bir üçgen ifade etmiyor!\n");
  }
  return 0;
}
int kontrol(int a,int b,int c){
  int z,x;
  if (a<b) {
    x=b-a;
  }
  else{
    x=a-b;
  }
  if (c<b) {
    z=b-c;
  }
  else{
    z=c-b;
  }
  if (x<=c && c<=a+b && z<=a &&  a<=(b+c)) {
    return 1;
  }
  else{
    return 0;
  }
}
int dik(int a,int b,int c){
  int max,z1,z2;
  if (a>b && a>c) {
    max=a,z1=b,z2=c;
  }
  if (c>b && c>a) {
    max=c,z1=a,z2=b;
  }
  if (b>c && b>a) {
    max=b,z1=a,z2=c;
  }
  if ((z1*z1)+(z2*z2)==(max*max)) {
    return 1;
  }
  else{
    return 0;
  }
}
