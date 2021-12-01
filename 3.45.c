/* 3.45 (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
and is defined as follows:
n! = n · (n - 1) · (n - 2) · ... · 1 (for values of n greater than or equal to 1)
and
n! = 1 (for n = 0).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
a) Write a program that reads a nonnegative integer and computes and prints its factorial.
b) Write a program that estimates the value of the mathematical constant e by using the
formula:
1 - + ----
1 - + ----
1 - + ...
e = 1 + ----
1! 2! 3!
c) Write a program that computes the value of e x by using the formula */
#include <stdio.h>
int main() {
  int n,x;//input
  int a,fak; //fak:faktöriyel, a:sayaç
  int a2,fak2,a3; //a2,a3:sayaç
  float e,ex;
  a=1,a3=0;
  fak=1, fak2=1,e=1.00,ex=1.00;
  printf("Sayıyı girin(n):");
  scanf("%d",&n);
  printf("x değerini girin:");
  scanf("%d",&x );
  while (a<=n) {
    fak*=a; //fak=fak*a
    a2=a;
    while (0<a2) {
      fak2*=a2;
      --a2; //a2=a2-1
    }
    e+=(1/(float)fak2);
    ex+=((x^a3)/(float)fak2);
    ++a,++a3;
    fak2=1;
  }
  printf("%d!=%d\ne=%.2f\ne üssü %d = %.2f\n",n,fak,e,x,ex);

  return 0;
}
