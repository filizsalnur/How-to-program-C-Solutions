/*5.33 (Guess the Number Modification) Modify the program of Exercise 5.32 to count the num-
ber of guesses the player makes. If the number is 10 or fewer, print Either you know the secret or
you got lucky! If the player guesses the number in 10 tries, then print Ahah! You know the secret!
If the player makes more than 10 guesses, then print You should be able to do better! Why should
it take no more than 10 guesses? Well, with each “good guess” the player should be able to eliminate
half of the numbers. Now show why any number 1 to 1000 can be guessed in 10 or fewer tries*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  int y,z,a,say=0,skor;
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
      say++;
    }
    if (z>y) {
      printf("Tahminiz sayıdan büyük...\n");
      say++;
    }
    if (z==y) {
      printf("KAZANDINIZ!!!!!\n");
      break;
    }
    if (say==20) {
      printf("Tahmin hakkınız kalmadı :(\n");
      break;
    }
  } while(a==0);
  skor=100-say*5;
  printf("Puan: %d/100\n",skor );
  return 0;
}
