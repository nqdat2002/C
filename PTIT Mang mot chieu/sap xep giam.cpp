#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j]>a[j-1]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
return 0;	
}