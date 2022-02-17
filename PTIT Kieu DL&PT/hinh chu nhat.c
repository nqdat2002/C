#include<stdio.h>
int main(){
	int d,r;
	scanf("%d%d",&d,&r);
	if (d>0&r>0){
		int p=(d+r)*2;
		int s=d*r;
		printf("%d %d",p,s);
	}else{printf("0");}
}
