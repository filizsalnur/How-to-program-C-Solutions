/*2.18 (Comparing Values) Write a program that asks the user to enter the highest rainfall ever in
one season for a country, and the rainfall in the current year for that country, obtains the values from
the user, checks if the current rainfall exceed the highest rainfall and prints an appropriate message
on the screen. If the current rainfall is higher, it assigns that value as the highest rainfall ever. Use
only the single-selection form of the if statement you learned in this chapter.*/
#include <stdio.h>
int main() {
  int max,x;
  printf("Ülkenizin şimdiye kadarki en yüksek yağış miktarı: " );
  scanf("%d",&max );
  printf("Ülkenizin bu yılki yağış miktarı: " );
  scanf("%d",&x );
  if (max<x) {
    printf("%d şimdiye kadarki en yüksek yağış miktarıdır.\n",x );
  }
  return 0;
}
