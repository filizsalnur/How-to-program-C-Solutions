/*5.32 (Guess the Number) Write a C program that plays the game of “guess the number” as fol-
lows: Your program chooses the number to be guessed by selecting an integer at random in the range
1 to 1000. The program then types:
I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  int y,z,a;
  unsigned seed;
  scanf("%u",&seed );
  srand(seed);
  y=(rand( )%1000);
  a=0;
  do {
    printf("0 ile 1000 arasındaki sayıyı tahmin edin: ");
    scanf("%d",&z);
    if (z<y) {
      printf("Tahminiz sayıdan küçük...\n");
    }
    if (z>y) {
      printf("Tahminiz sayıdan büyük...\n");
    }
    if (z==y) {
      printf("KAZANDINIZ!!!!!\n");
      break;
    }
  } while(a==0);
  return 0;
}
