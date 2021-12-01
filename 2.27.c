/* 2.27 (Checkerboard Pattern of Asterisks) Display the following checkerboard pattern with eight
printf statements and then display the same pattern with as few printf statements as possible.*/
#include <stdio.h>
int main() {
  char a;
  scanf("%c",&a );
  printf("%c %c %c %c %c %c %c %c\n",a,a,a,a,a,a,a,a);
  printf(" %c %c %c %c %c %c %c %c\n",a,a,a,a,a,a,a,a);
  printf("%c %c %c %c %c %c %c %c\n",a,a,a,a,a,a,a,a);
  printf(" %c %c %c %c %c %c %c %c\n",a,a,a,a,a,a,a,a);
  printf("%c %c %c %c %c %c %c %c\n",a,a,a,a,a,a,a,a);
  printf(" %c %c %c %c %c %c %c %c\n",a,a,a,a,a,a,a,a);
  printf("%c %c %c %c %c %c %c %c\n",a,a,a,a,a,a,a,a);
  printf(" %c %c %c %c %c %c %c %c\n",a,a,a,a,a,a,a,a);
  return 0;
}
