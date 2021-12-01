/*5.23 (Time in Seconds) Write a function that takes the time as three integer arguments (for
hours, minutes, and seconds) and returns the number of seconds since the last time the clock “struck
12.” Use this function to calculate the amount of time in seconds between two times, both of which
are within one 12-hour cycle of the clock.*/
#include <stdio.h>
int dakika(int);
int saat(int);
int main() {
  int sn,d,h;
  printf("Saniye:" );
  scanf("%d",&sn );
  d=dakika(sn);
  h=saat(d);
  sn=sn-(60*d);
  d=d-(60*h);
  printf("%d:%d:%d\n",h,d,sn);
  return 0;
}
int dakika(int saniye){
  int dakika;
  dakika=saniye/60;
  saniye=saniye%60;
  return dakika;
}
int saat(int dakika){
  int saat;
  saat=dakika/60;
  dakika=dakika%60;
  return saat;
}
