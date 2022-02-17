#include<stdio.h>
#include<math.h>
void check(int a[],int n){
	int i,j,count;
	int min=1000000000;
	for (i=0;i<n;i++)
	{
		count=1;
		for (j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				count=0;
			}
		}
		if (count==1) break;
	}
	count=1;
	for (i=0;i<n-1;i++)
	{
		if (a[i+1]-a[i]==min) count++;
		if (min>(a[i+1]-a[i])) 
		{
			min=a[i+1]-a[i];
			count=1;
		}
	}
	printf ("%d %d\n",min,count);
}
int main ()
{
	int t,i;
	scanf("%d",&t);
	while (t--){
		int n;int a[100000];
		scanf("%d",&n);
		for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		check(a,n);
	}
	return 0;
}
