#include <stdio.h>
int main()
	{
	int a,b;
	scanf("%d%d",&a,&b);
	if(b==0)
		{
		printf("%d",0);
		 return 0;
		}
	printf("%3d%3d%3d %.2f%3d",a+b,a-b,a*b,(float)a/b,a%b);
	return 0;
	}