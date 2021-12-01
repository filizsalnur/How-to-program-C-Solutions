/*5.28 (Sum of Digits) Write a function that takes an integer and returns the sum of its digits. For
example, given the number 7631, the function should return 17.*/
#include <stdio.h>
int basamak(int);
int sum_of_digits(int,int);
int main() {
  int x;
  printf("Sayıyı girin: ");
  scanf("%d",&x);
  printf("Sayının rakamları toplamı: %d\n",sum_of_digits(x,basamak(x)));
  return 0;
}
int basamak(int number){
  int i,bas=0;
  for (i=1; 1<=(number/i); i*=10) {
    bas++;
  }
  return bas;
}
int sum_of_digits(int number,int basamak){
  int toplam=0,i,a=10,b=0,b2=0;
  for (i=0; i<basamak; i++) {
    b2=(number-b)%a;
    b=b2/(a/10);
    toplam+=b;
    a*=10;
  }
  return toplam;
}
