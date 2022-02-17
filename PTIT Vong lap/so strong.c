#include<stdio.h> 
#include<math.h> 
int main()
{ 
	int n;
	scanf("%d",&n); 
	int a=n,s=0;
	while(n)
		{	
		int i=n%10; int gt=1;
		n=n/10;
		int j;
	 		for(j=1;j<=i;j++){
				gt=gt*j;}
		s=s+gt;}
	if(s==a) printf("1");
	else printf("0"); 
	// printf("%d",s);
return 0; 
}
