#include<stdio.h>
int a[100],b[100];
int n;
int i,j;
void nhap(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
	 scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	 b[i]=1;
	}
}
void dem(){
	for(i=0;i<n;i++){
		int count=1;
		if(b[i]){
			b[i]=0;
			for(j=1+i;j<n;j++){
				if(a[j]==a[i]) {
					count++;
					b[j]=0;
				}
			}
		printf("%d %d\n",a[i],count);	
		}
	}
}
int main(){
	nhap();
	dem();
	return 0;
}