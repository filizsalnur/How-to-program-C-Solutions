/*6.21 Matris çarpımı*/
#include <stdio.h>
int main() {
  int m1,m2,n1,n2,i,ij,r,toplam=0;
  int i1;
  printf("ilk matrisin m ve n değerleri(mxn): ");
  scanf("%d\n%d",&m1,&n1 );
  int A[m1][n1];
  for (i = 0; i < m1; i++) {
    printf("%d. satırın değerlerini sırayla girin:",i+1 );
    for (ij = 0; ij < n1; ij++) {
      scanf("%d",&r);
      A[i][ij]=r;
    }
  }


  printf("ikinci matrisin m ve n değerleri(mxn): ");
  scanf("%d\n%d",&m2,&n2 );
  int B[m2][n2];
  for (i = 0; i < m2; i++) {
    printf("%d. satırın değerlerini sırayla girin:",i+1 );
    for (ij = 0; ij < n2; ij++) {
      scanf("%d",&r);
      B[i][ij]=r;
    }
  }

  int C[m1][m1];
  for (i = 0; i <m1; i++) {
    for (ij = 0; ij < m1; ij++) {
      toplam=0;
      for (i1 = 0; i1 < n1; i1++) {
        toplam+=(A[i][i1]*B[i1][ij]);
      }
      C[i][ij]=toplam;
    }
  }

  for (i = 0; i <m1; i++) {
    for (ij = 0; ij <m1; ij++) {
      printf("%-4d",C[i][ij] );
    }
    printf("\n");
  }
  return 0;
}
