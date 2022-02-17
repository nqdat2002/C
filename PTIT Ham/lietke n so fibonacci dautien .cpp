#include<stdio.h>
int main(){
	long long int fb[100];
	fb[0]=0,fb[1]=1;
	for(int i=2;i<=92;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
	int n,mark=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    printf("%d ",fb[i]);
	}
	return 0;
}
#include<stdio.h>
int main(){
	int f0=0,f1=1,fn=1;
	int n,i;
	scanf("%d",&n);
		for(i=0;i<n;i++){
			if(i==0) printf("%d ",f0);
			else if(i==1) printf("%d ",f1);
			else if(i==2) printf("%d ",f0+f1);
			else if(i>2)
			{	
				f0=f1;
				f1=fn;
				fn=f0+f1;
				printf("%d ",fn);
			}
	}
	return 0;
}