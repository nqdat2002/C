#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int ts(int n){
	int i;int s=0;
		while(n>0){
		 s=s+1;
		 n/=10;
		 }
    return s;		 
	}
int main(){
	int a,b;int x,y;
	scanf("%d%d",&a,&b);
	x=ts(a);
	y=ts(b);
	if((x>=y)){
printf("%d %d",a,b);}
	else {
printf("%d %d",b,a);}
	return 0;
}
