/*5.26 (Perfect Numbers) An integer number is said to be a perfect number if its factors, including
1 (but not the number itself), sum to the number. For example, 6 is a perfect number because 6 =
1 + 2 + 3. Write a function isPerfect that determines whether parameter number is a perfect num-
ber. Use this function in a program that determines and prints all the perfect numbers between 1
and 1000. Print the factors of each perfect number to confirm that the number is indeed perfect.
Challenge the power of your computer by testing numbers much larger than 1000.*/
#include <stdio.h>
int carpan(int);
int isPerfect(int,int);
int main() {
  int x,z;
  printf("Sayıyı girin: ");
  scanf("%d",&x);
  z=carpan(x);
  isPerfect(x,z);
  return 0;
}
int isPerfect(int a,int b){
  if (a==b) {
    printf("%d sayısı Perfect bir sayıdır!\n",a);
  }
  else{
    printf("%d sayısı Perfect bir sayı değildir!!!\n",a);
  }
  return 0;
}
int carpan(int a){
  int i,top=0;
  printf("Çarpanları: ");
  for (i = 1; i < a; i++) {
    if (a%i==0) {
      top+=i;
      printf("%d ",i);
    }
  }
  printf("\n");
  return top;
}
