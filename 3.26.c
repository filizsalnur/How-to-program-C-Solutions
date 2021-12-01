/*3.26 (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23, find the two
largest values of the 10 numbers. [Note: You may input each number only once.]*/
#include <stdio.h>
int main() {
  int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10; //sayılar
  int max1,z; //z:sayaç
  z=0;
  printf("Karsilastirilacak sayilari girin.\n" );
  scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
  while (z<10) {
    if (a1>a2 && a1>a3 && a1>a4 && a1>a5 && a1>a6 && a1>a7 && a1>a8 && a1>a9 && a1>a10) {
      max1=a1;
      a1=-9999;
    }
    else if (a2>a1 && a2>a3 && a2>a4 && a2>a5 && a2>a6 && a2>a7 && a2>a8 && a2>a9 && a2>a10) {
      max1=a2;
      a2=-9999;
    }
    else if (a3>a1 && a3>a2 && a3>a4 && a3>a5 && a3>a6 && a3>a7 && a3>a8 && a3>a9 && a3>a10) {
      max1=a3;
      a3=-9999;
    }
    else if (a4>a1 && a4>a2 && a4>a3 && a4>a5 && a4>a6 && a4>a7 && a4>a8 && a4>a9 && a4>a10) {
      max1=a4;
      a4=-9999;
    }
    else if (a5>a1 && a5>a2 && a5>a3 && a5>a4 && a5>a6 && a5>a7 && a5>a8 && a5>a9 && a5>a10) {
      max1=a5;
      a5=-9999;
    }
    else if (a6>a1 && a6>a2 && a6>a3 && a6>a4 && a6>a5 && a6>a7 && a6>a8 && a6>a9 && a6>a10) {
      max1=a6;
      a6=-9999;
    }
    else if (a7>a1 && a7>a2 && a7>a3 && a7>a5 && a7>a6 && a7>a4 && a7>a8 && a7>a9 && a7>a10) {
      max1=a7;
      a7=-9999;
    }
    else if (a8>a1 && a8>a2 && a8>a3 && a8>a4 && a8>a6 && a8>a7 && a8>a5 && a8>a9 && a8>a10) {
      max1=a8;
      a8=-9999;
    }
    else if (a9>a1 && a9>a2 && a9>a3 && a9>a4 && a9>a5 && a9>a7 && a9>a8 && a9>a6 && a9>a10) {
      max1=a9;
      a9=-9999;
    }
    else if (a10>a2 && a10>a3 && a10>a4 && a10>a5 && a10>a6 && a10>a7 && a10>a8 && a10>a9 && a10>a1) {
      max1=a10;
      a10=-9999;
    }
    (z<9)?printf("%d>",max1):printf("%d",max1);
    ++z;

  }
  printf("\n");
  return 0;
}
