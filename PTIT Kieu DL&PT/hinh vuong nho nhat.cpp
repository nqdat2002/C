#include<stdio.h>
int main()
{	
	int x1,x2,x3,x4,y1,y2,y3,y4;
	int i,j;
	scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int M[4]={x1,x2,x3,x4};
	int N[4]={y1,y2,y3,y4};
	for(i=0;i<3;i++){
		for(j=i+1;j<4;j++){
			if(M[i]>M[j]){
				int t=M[i];
				M[i]=M[j];
				M[j]=t;
			}
		}
		for(j=i+1;j<4;j++){
			if(N[i]>N[j]){
				int t=N[i];
				N[i]=N[j];
				N[j]=t;
			}
		}	
	}
	if((M[3]-M[0])>=(N[3]-N[0]))
	printf("%d",(M[3]-M[0])*(M[3]-M[0]));
	else
	printf("%d",(N[3]-N[0])*(N[3]-N[0]));
	return 0;
}