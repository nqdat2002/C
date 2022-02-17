#include <stdio.h>
int main()
	{
	int n,y,w,d;
	scanf("%d",&n);
	y=n/365;
	w=(n%365)/7;
	d=(n%365)%7;
	printf("%d %d %d",y,w,d);
	return 0;
	}