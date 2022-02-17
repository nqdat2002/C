#include<stdio.h>
#include<math.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int a[1000],n,i,k;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			if(a[i]<2) continue;
			else
			{
				int q =1;
				for(k=2;k<=sqrt(a[i]);k++){
					if(a[i]%k==0)
					{
						q=0;
						break;
					}
				}
				if(q==1)
				printf("%d ",a[i]);		
			}
		}
		printf("\n");
	}
	
}