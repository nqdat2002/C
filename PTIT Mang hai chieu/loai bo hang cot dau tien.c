#include<stdio.h>
int main() {
   int m,n, i, j;
   int b,a;
   scanf("%d",&b);
   int A[b],B[b];
  
   int Y[10][100][100];
   for(a=0;a<b;a++){

   scanf("%d%d",&A[a],&B[a]);
   
   for (i = 0; i < A[a]; i++) {
      for (j = 0; j < B[a]; j++) {
         scanf("%d", &Y[a][i][j]);
      }
   }
}
for(a=0;a<b;a++){

   printf("Test %d:\n",a+1);
   for (i = 1; i < A[a]; i++) {
      for (j = 1; j < B[a]; j++) {
         printf("%d ",Y[a][i][j]);
      }
      printf("\n");
   }
}
   return (0);
}
