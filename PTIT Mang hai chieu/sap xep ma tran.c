#include<stdio.h>

int main (){
	int m,n,i,j,M[100][100],e,f,z,a;
	scanf("%d",&a);
	for(z=0;z<a;z++){
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&M[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			for(e=i;e<m;e++){
				for(f=j;f<n;f++){
					if(M[i][j]>M[e][f]){
						int t=M[i][j];
						M[i][j]=M[e][f];
						M[e][f]=t;
					}
				}
			}
		}
	}
	printf("Test %d:\n",z+1);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
	
}
	return 0;
	}
