#include<stdio.h>
#include<stdbool.h>
bool dem(int x){
	int m=0,n=0;
	while(x>0){
		int i=x%10;
		int j=(x/10)%10;
		if(i>=j)
			m++;
		else return false;
		n++;
		x/=10;
	}
	if(m==n)
	return true;
}
int main(){
	int i,j=0,k,m,n,count,count1;
	int x,y,z;
	int a[100000]={},b[100],c[100];
	while (scanf("%d",&x)!=EOF){
		a[count++]=x;
	}
	for(i=0;i<count;i++){
		count1=0;
		if(dem(a[i])){
			for(k=0;k<i;k++)
				if(a[i]==a[k])
					count1++;
			
			if(count1>=1)
				continue;
			else
			{
				b[j]=a[i];
				j++;	
			}
		}
	}
	for(i=0;i<j;i++){
		c[i]=0;
		for(k=0;k<count;k++)
			if(b[i]==a[k])
				c[i]++;
	}
	for(i=0;i<j-1;i++){
		for(k=i+1;k<j;k++){
			if(c[i]<c[k]){
				int z=b[i];    
				b[i]=b[k];
				b[k]=z;
				int y=c[i];
				c[i]=c[k];
				c[k]=y;
			}
		}
	}
	for(i=0;i<j;i++)
		printf("%d %d\n",b[i],c[i]);
	return 0;
}
