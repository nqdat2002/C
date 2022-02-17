#include <stdio.h>
#define nmax 1000005
int main(){ 
	int t; 
	scanf("%d",&t);
	while(t--){ 
		int n,j=0;
		scanf("%d", &n); 
		int a[nmax]; int b[nmax]; 
		for(int i=0;i<n;i++)
			scanf("%d", &a[i]); 
		int tmp = a[n-1]; 
		for(int i = n - 1;i >= 0; i --){ 
			if(a[i] < a[i - 1]){ 
				b[j] = a[i - 1]; 
				j ++; 
			} 
			else{
				int t = a[i-1];
				a[i-1]=a[i];
				a[i]=t;
			}
		} 
		for(int i=j-1;i>=0 ;i--)
			printf("%d ",b[i]); 
			
		printf("%d\n",tmp); 
	} 
	return 0; 
}
