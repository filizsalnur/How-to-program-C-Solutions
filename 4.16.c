//WHİLE
/*4.16 (Triangle-Printing Program) Write a program that prints the following patterns separately,
one below the other. Use for loops to generate the patterns. All asterisks ( * ) should be printed by a single printf statement of the form printf("%s", "*" ) ; (this causes the asterisks to print side by
side). [Hint: The last two patterns require that each line begin with an appropriate number of
blanks.]*/
#include <stdio.h>
int main() {
  int a,y,z1,z2,z4,z3;
  z1=1,z2=1;
  printf("ucgenin tipini secin.(1/2/3/4) " );
  scanf("%d",&a );
  printf("Yukseklık degeri: ");
  scanf("%d",&y);
  if (a==1) {
    while (z1<=y) {
      while (z2<=z1) {
        printf("*" );
        ++z2;
      }
      printf("\n");
      ++z1;
      z2=1;
    }
  }
  else if (a==2) {
    z3=y;
    while (z3>0) {
      z2=z3;
      while (z2>0) {
        printf("*");
        --z2;
      }
      printf("\n" );
      --z3;
    }
  }
  else if (a==3) {
    z3=y;
    while (z3>0) {
      z2=z3,z4=0;
      while (z4<z1 ) {
        if (z4>0) {
          printf(" " );
        }
        ++z4;
      }
      while (z2>0) {
        printf("*");
        --z2;
      }
      printf("\n" );
      --z3,++z1;
    }
  }
  else if (a==4) {
    z3=y-1;
    while (z1<=y) {
      z4=z3;
      while (z4>0) {
        printf(" " );
        --z4;
      }
      while (z2<=z1) {
        printf("*" );
        ++z2;
      }
      printf("\n");
      ++z1,--z3;
      z2=1;
      
    }
  }
  return 0;
}
