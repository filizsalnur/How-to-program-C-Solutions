/*5.35 (Fibonacci) The Fibonacci series
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
begins with the terms 0 and 1 and has the property that each succeeding term is the sum of the two
preceding terms. a) Write a nonrecursive function fibonacci(n) that calculates the n th Fibonacci
number. Use unsigned int for the function’s parameter and unsigned long long int for its return
type. b) Determine the largest Fibonacci number that can be printed on your system*/
#include <stdio.h>
long fibonacci(int);
int main() {
  int n;
  printf("Terim: ");
  scanf("%d",&n);
  printf("%ld\n",fibonacci(n) );
  return 0;
}
long fibonacci(int n){
  if (n==0 || n==1) {
    return n;
  }
  else{
    return (fibonacci(n-1)+fibonacci(n-2));
  }
}
