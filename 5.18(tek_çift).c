/*5.18 (Even or Odd) Write a program that inputs a series of integers and passes them one at a time
to function isEven , which uses the remainder operator to determine whether an integer is even. The
function should take an integer argument and return 1 if the integer is even and 0 otherwise.*/
#include <stdio.h>
int even_odd(int);
int main() {
  int x,z;
  scanf("%d",&x );
  z=even_odd(x);
  printf("%d\n",z);
  switch (z) {
    case 1:
      printf("Çift\n");
      break;
    case 0:
      printf("Tek\n");
      break;
  }
  return 0;
}
int even_odd(int number){
  if (number%2==0) {
    return 1;
  }
  else{
    return 0;
  }
}
