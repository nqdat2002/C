#include<stdio.h>
int main(){
    int i, j,k, n;
    scanf("%d",&n);
     for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
        	    if( j==i || j==1 || i==n || i==1 ) printf("*");
	      	    else printf(".");
        }
        printf("\n");
    }
    return 0;    
}
