#include<stdio.h>
int tong(int n){
	int i,sum=0;
	for(i=1;i<n;i++){
		sum=sum+i;
	}
	return sum;
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		for(j=1;j<=n;j++){
			if(i>=j){
			if(i%2==1)
			printf("%c ",tong(i)+j+96);
			else
			printf("%c ",tong(i+1)-j+97);
		}
	}
		printf("\n");
	}
	
	return 0;
}
