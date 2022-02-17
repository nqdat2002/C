#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool snt(int x)
{
	int i;
    if (x < 2)
        return false;
    for (i = 2; i <= sqrt(x); i++)
        if (x%i == 0)
            return false;
    return true;
}
bool tachso(int n){
	while(n){
		if(!snt(n%10)) return false;
		n/=10;
		
	}
	return true;
}
int main(){
	int t;
	int a,b,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		int c=0;
		for(i=a;i<=b;i++){
			if(snt(i)==true &&tachso(i)==true)
			c++;
	}
	printf("%d\n",c);
	}
	return 0;
}