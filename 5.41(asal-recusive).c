/*5.41 (Recursive Prime) Write a recursive function isPrime that determines whether the given
input is a prime number. Use this function in a program.*/
#include <stdio.h>
int isPrime(int,int);
int main() {
  int x;
  scanf("%d",&x);
  if (isPrime(x,x-1)==1) {
    printf("sayı asal\n" );
  }
  else{
    printf("sayı asal değil\n");
  }
  return 0;
}
int isPrime(int n,int i){
  if (i==1) {
    return 1;
  }
  else if (n%i!=0) {
    i--;
    isPrime(n,i);
  }
  else if (n%i==0){
    return 0;
  }
}
