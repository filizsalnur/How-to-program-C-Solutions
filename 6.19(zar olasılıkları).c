/*6.19 (Dice Rolling) Write a program that simulates the rolling of two dice. The program should
use rand twice to roll the first die and second die, respectively. The sum of the two values should
then be calculated. [ Note: Because each die can show an integer value from 1 to 6, then the sum of
the two values will vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 the least
frequent sums.] Figure 6.24 shows the 36 possible combinations of the two dice. Your program
should roll the two dice 36,000 times. Use a one-dimensional array to tally the numbers of times
each possible sum appears. Print the results in a tabular format. Also, determine if the totals are rea-
sonable; i.e., there are six ways to roll a 7, so approximately one-sixth of all the rolls should be 7. */
#define a_size 6
#include <stdio.h>
int main() {
  int i,j,p;
  int A[a_size]={1,2,3,4,5,6};
  printf("%4d",A[0] );
  for (p = 1; p <a_size; p++) {
    printf("%3d",A[p] );
  }
  printf("\n");
  for (i = 0; i < a_size; i++) {
    printf("%-3d",A[i] );
    for (j = 0; j <a_size; j++) {
      printf("%-3d",A[i]+A[j] );
    }
    printf("\n");
  }
  return 0;
}
