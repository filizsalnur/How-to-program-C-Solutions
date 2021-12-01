/*5.20 (Displaying a Rectangle of Any Character) Modify the function created in Exercise 5.19 to
form the rectangle out of whatever character is contained in character parameter fillCharacter . Thus
if the sides are 5 and 4, and fillCharacter is "@", then the function should print the following:*/
#include <stdio.h>
int kare(int,int,char);
int main() {
  int a,b;
  char z;
  printf("Dikdörtgenin enini-boyunu-karakteri girin: ");
  scanf("%d\n%d\n%c",&a,&b,&z );
//  printf("Karakteri girin: ");
//  scanf("%c",&z );
  kare(a,b,z);
  return 0;
}
int kare(int a,int b,char karakter){
  int i,j;
  for (i = 0; i < b; i++) {
    for (j = 0; j < a; j++) {
      printf("%c  ",karakter);
    }
    printf("\n");
  }
  return 0;
}
