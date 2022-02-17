#include<stdio.h>
int main(){
int n;
int a[10];
int i=0;
scanf("%d",&n);
int schan= 0, sle = 0;
while(n>0){
  a[i]=n%10;
  n=n/10;
  i++;
}
for(int j=0; j<i; j++){
if(a[j]%2==0){
   schan++;
  }
  else sle++;
 }
 printf("%d",sle);
 printf(" ");
 printf("%d",schan);
 return 0;
}