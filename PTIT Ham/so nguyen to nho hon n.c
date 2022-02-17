#include<stdio.h>
#include <math.h>
int snt(int x)
{
	int i;
    if (x < 2)
        return 0;
    for (i = 2; i <= sqrt(x); i++)
        if (x%i == 0)
            return 0;
    return 1;
}
int main()
{
    int n;int i;
    scanf("%d",&n);
    for ( i = 1; i < n; i++){
        if (snt(i))
    printf("%d\n",i);
    }
    return 0;
    }
