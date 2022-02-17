#include<stdio.h>
#include<stdbool.h>
int uc(int i, int j){
	int c;
	while(i!=j){
		if(i>j) c=i-j;
		else c=j-i;
		i=j;
		j=c;
	}
	return c;
}
int main(){
	int a,b,i,j,m,n;
	scanf("%d %d",&a,&b);
	int c;
	for(i=a;i<=b-1;i++){
		for(j=i+1;j<=b;j++){
			m=i;n=j;
			uc(i,j);
			if(uc(i,j)==1)
			printf("(%d,%d)\n",m,n);
		}
	}
	return 0;	
}
