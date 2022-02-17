#include<stdio.h>
int main()
	{
	int i,a,b,s=0;
	scanf("%d%d",&a,&b);
	if (a<b) {
		for(i=a;i<=b;i++)
		{s+=i;}
	printf("%3d",s);	
	}
	else
	{for(i=b;i<=a;i++)
	{s+=i;
	}
	printf("%3d",s);
	}
	
	

}
