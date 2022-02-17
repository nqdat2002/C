#include<stdio.h>
int main(){
	long long int n,x,ndao=0;
	scanf("%lli",&n);
	while(n){
		ndao=ndao*10+n%10;
		n/=10;
		x=ndao;
	}
	int a=0,b=0,c=0,d=0,i;
	while(ndao){
		i=ndao%10;
		ndao/=10;
		if(i==2) a++;
		if(i==3) b++;
		if(i==5) c++;
		if(i==7) d++;	
	}
	int e=0,f=0,g=0,h=0,j;
	while(x){
		j=x%10; 
		x/=10;
		if(j==2)
		{
			e++;
			if(e==1)
			printf("%d %d\n",j,a);
			else 
			continue;
		}
		else if(j==3)
		{
			f++;
			if(f==1)
			printf("%d %d\n",j,b);
			else 
			continue;	
		}
		else if(j==5)
		{
			g++;
			if(g==1)
			printf("%d %d\n",j,c);
		else 
			continue;
		}
		else if(j==7)
		{
			h++;
			if(h==1)
			printf("%d %d\n",j,d);
			else 
			continue;		
		}
		else { continue;}
	}
	return 0;
}
