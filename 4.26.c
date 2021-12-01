/*4.26 (Calculating the Value of π ) Calculate the value of π from the infinite series
π = 4– 4/3+ 4/5 - 4/7+ 4/9-  ...
Print a table that shows the value of π approximated by one term of this series, by two terms, by
three terms, and so on. How many terms of this series do you have to use before you first get 3.14?
3.141? 3.1415? 3.14159?*/
#include <stdio.h>
int main() {
  float pi=0.00;
  int bas=100000,i,a1=1;
  for (i = 2; i < bas+2; i++) {
    if (i%2==0) {
      pi+=(float)4/a1;
    }
    else {
      pi-=(float)4/a1;
    }
    a1+=2;
  }
  printf("%.4f\n",pi-0.00005 );
  return 0;
}
