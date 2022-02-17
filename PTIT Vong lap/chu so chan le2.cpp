#include<stdio.h> 
#include<math.h> 
int main()
{ 
	int n,X[n];
	scanf("%d",&n); 
	int j;
	for(j=0;j<n;j++)
	{scanf("%d",&X[j]);}
	for(j=0;j<n;j++){
	    int b=0,c=0;
	while(X[j])
		{	
		int i=X[j]%10;
		X[j]=X[j]/10;
	 	if(i%2==0) b++;  
		else c++;}
	printf("%d %d\n",c,b);}
return 0; 
}
#include<stdio.h>
#include<string.h>
int main(){
	int t,j;
	scanf("%d\n",&t);
	while(t--){           						//for(j=0;j<t;j++){
		char kt[1000];   
		int i, dem1=0, dem2=0;
		gets(kt);        						// nhap xau
		int n = strlen(kt); 
		for(i=0;i<n;i++){
			if(kt[i]%2==0) // kt[i]%2==0
				dem1++;
			else dem2++;
		}	
		printf("%d %d\n",dem2,dem1);							
	}
	return 0;
}