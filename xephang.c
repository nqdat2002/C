#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[105],b[105];
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
				int t1=b[i];
				b[i]=b[j];
				b[j]=t1;
			}
		}
	}
	int res=a[0]+b[0];
	
	for(int i=1;i<n;i++){
		if(res<a[i]) res=a[i]+b[i];
		else res=res+b[i];
	}
	
	printf("%d",res);
	return 0;
}
