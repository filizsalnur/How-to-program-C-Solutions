/*5.34 (Recursive Exponentiation) Write a recursive function power(base, exponent ) that when
invoked returns
base exponent
For example, power(3, 4 ) = 3 * 3 * 3 * 3 . Assume that exponent is an integer greater than or equal
to 1. Hint: The recursion step would use the relationship
base exponent = base * base exponent–1*/
#include <stdio.h>
long power(int,int);
int main() {
  int x,y;
  printf("Taban: ");
  scanf("%d",&x );
  printf("Üs: ");
  scanf("%d",&y);
  printf("%ld\n",power(x,y) );
  return 0;
}
long power(int base,int exponent ){
  if (exponent==1) {
    return (base);
  }
  else{
    exponent--;
    return (base*power(base,exponent));
    printf("%d\n",base);
  }
}
