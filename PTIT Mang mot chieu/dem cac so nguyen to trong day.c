#include<stdio.h>
#include<stdbool.h>
#include<math.h>
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
int a[100],b[100];
int n,t;
int i,j,k,z;
int main(){
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j]){
					int m=a[i];
					a[i]=a[j];
					a[j]=m;
				}
			}	
		}
		printf("Test %d:\n",k+1);
		for(i=0;i<n;i++)
		{
	 		b[i]=1;
		}
		for(i=0;i<n;i++)
		{
			if(snt(a[i]))
			{
		
			int count=1;
				if((b[i]))
				{
					b[i]=0;
					for(j=1+i;j<n;j++)
					{
						if(a[j]==a[i]&&a[j]>1)
						{
							count++;
							b[j]=0;
						}
					}		
				printf("%d xuat hien %d lan\n",a[i],count);	
				}
			}	
		}
	}	
	return 0;
}
