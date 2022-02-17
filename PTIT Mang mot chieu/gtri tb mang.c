#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i;
	float s=0;
	int M[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&M[i]);
	}
	for(i=0;i<n;i++){
		s=s+M[i];
	}
	float r=s/n;
	printf("%0.3f",r);
	return 0;
}
