#include<stdio.h>
int main(){
	int a[100],b[100],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[i]=1;
	
	for(i=0;i<n-1;i++){
		int count=1;
		if(b[i]==1){
			b[i]=0;
			for(j=i+1;j<n;j++){
				if(a[j]==a[i]){
					count++;
					b[j]=0;
				}
			}			
		}
		if(count>1) printf("%d ",a[i]);
	}
	return 0;
}
