#include<stdio.h>
#include<math.h>
int tn(int x){
	int c=0,d=0,e=x;
	while(x){
		int i=x%10;
		if(i==4)
		return 0;
		c=c+i;
		d=d*10+i;
		x/=10;
	}
	if(d==e&&c%10==0)
	return 1;
	return 0;
}
int main(){
	int n,i,m,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(j=pow(10,m-1)+1;j<pow(10,m);j++){
			if(tn(j)==1)
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}