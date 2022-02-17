#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int max,max1;
	max1=(a<b)?a:b;
	max=(max1<c)?max1:c;
	printf("%3d",max);
}
