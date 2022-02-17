#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    int a[20], len, i = 0, j, k;
    char roman[10][20];
    int t;
    scanf("%d\n",&t);
    for(j=0;j<t;j++)
	{
    	gets(roman[j]);
	}
	for(j=0;j<t;j++){
	
    len = strlen(roman[j]);
    for(i = 0; i < len; i++)
    {
        if(roman[j][i] == 'I')
            a[i] = 1;
        else if(roman[j][i] == 'V')
            a[i] = 5;
        else if(roman[j][i] == 'X')
            a[i] = 10;
        else if(roman[j][i] == 'L')
            a[i] = 50;
        else if(roman[j][i] == 'C')
            a[i] = 100;
        else if(roman[j][i] == 'D')
            a[i] = 500;
        else if(roman[j][i] == 'M')
            a[i] = 1000;

    }
    k = a[len-1];
    for(i = len-1; i > 0; i--)
    {
        if(a[i] > a[i-1])
            k = k - a[i-1];
        else if(a[i] == a[i-1] || a[i] < a[i-1])
            k = k + a[i-1];
    }
    printf("\n%d",k);
	}
    return 0;
}
