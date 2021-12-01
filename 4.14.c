/*4.14 (Factorials) The factorial function is used frequently in probability problems. The factorial
of a positive integer n (written n! and pronounced “n factorial”) is equal to the product of the posi-
tive integers from 1 to n. Write a program that evaluates the factorials of the integers from 1 to 5.
Print the results in tabular format. What difficulty might prevent you from calculating the factorial
of 20?*/
#include <stdio.h>
int main() {
  int x,fak=1,i,j;
  printf("Değer girin: " );
  scanf("%d",&x );
  for (i = 1; i <=x; i++) {
    for (j = 1; j <=i; j++) {
      fak*=j;
    }
    printf("%d!=%d\n",i,fak );
    fak=1;
  }
  return 0;
}
