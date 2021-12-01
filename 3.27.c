/*3.27 (Validating User Input) Modify the program in Figure 3.10 to validate its inputs. On any
input, if the value entered is other than 1 or 2, keep looping until the user enters a correct value.*/
#include <stdio.h>
int main() {
  int x; //x:input
  while (x!=1 && x!=2) {
    printf("Gecerli bir deger girin(1/2): " );
    scanf("%d",&x);
  }
  return 0;
}
