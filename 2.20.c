/*2.20 (Converting from seconds to hours, minutes and seconds) Write a program that asks the
user to enter the total time elapsed, in seconds, since an event and converts the time to hours,
minutes and seconds. The time should be displayed as hours:minutes:seconds. [Hint: Use the
remainder operator]*/
#include <stdio.h>
int main() {
  int x,a1,a2,b1,b2;
  printf("Süreyi girin(saniye cinsinden)\n");
  scanf("%d",&x );
  a1=x%60;//mod(kaç dakika?)
  a2=(x-a1)/60;//kalan
  b1=a2%60;//kaç saat?
  b2=(a2-b1)/60;//kalan
  printf("%d:%d:%d\n",b2,b1,a1);
  return 0;
}
