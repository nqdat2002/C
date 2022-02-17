#include<stdio.h>
int main() {
  	 int M[100][100], N[100][100];
  	 int c;
  	 int t;
  	 scanf("%d",&t);
  	 int x;
   	for(x=0;x<t;x++)
   	{	
	   	int n,j,i,a,b;
	   	int arr[100][100]={0};
	   	scanf("%d",&n);
	   	for(i=0;i<n;i++){
	   		for(j=0;j<n;j++){
	   			if(i<j) M[i][j]=0;
	   			else M[i][j]=j+1;
			   } 
		   }
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				N[i][j]=M[j][i];
			}
		}
		for(a=0;a<n;a++){
			for(b=0;b<n;b++){
				for(c=0;c<n;c++){
					arr[a][b]+=M[a][c]*N[c][b];
				}
			}
		}
		printf("\nTest %d:\n",x+1);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",arr[i][j]);
			}
			printf("\n");
	}
}
return 0;
}
