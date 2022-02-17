#include<stdio.h>
int main(){
	int n,a[100],i,j,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("Buoc %d: ",i);
		for(j=0;j<i;j++){
			for(m=j+1;m<=i;m++){
				if(a[j]>a[m]){
					int t=a[j];
					a[j]=a[m];
					a[m]=t;
				}
			}
			
		}
		for(j=0;j<=i;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
	return 0;
}
