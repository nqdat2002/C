#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	bool check[10000]={false};
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);		
	}
	for(i=0;i<n;i++){
		if(!check[a[i]]){
			printf("%d ",a[i]);
			check[a[i]]=true;
		}
	}
	return 0;	
}
