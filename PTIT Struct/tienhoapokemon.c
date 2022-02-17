#include<stdio.h>
#include<string.h>
struct pokemon{
	int x;
	char M[100];
	int a,b;
};
void nhap(struct pokemon p[],int n){
	int i;
	for(i=0;i<n;i++){
		gets(p[i].M);
		if(i==n-1)
		scanf("%d%d",&p[i].a,&p[i].b);
		else
		scanf("%d%d\n",&p[i].a,&p[i].b);
	}
}
void timtong(struct pokemon p[],int n){
	int i,sum=0,c;
	for(i=0;i<n;i++){
		p[i].x=0;
			while(p[i].b>=p[i].a){
			c=p[i].b/p[i].a;
			p[i].x+=c;
			sum=sum+c;
			p[i].b=c*2+p[i].b%p[i].a;
			}
	}
	printf("%d\n",sum);
}
void sapxep(struct pokemon p[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(p[i].x<p[j].x){
				struct pokemon s=p[i];
				p[i]=p[j];
				p[j]=s;
			}
		}
	}
}

int main(){
	int n,i;
	scanf("%d\n",&n);
	struct pokemon M[100],N[100];
	nhap(M,n);
		timtong(M,n);
for(i=0;i<n;i++){
	N[i]=M[i];
	}
	sapxep(M,n);

	for(i=0;i<n;i++){
	if(N[i].x==M[0].x){
		printf("%s",N[i].M);
		break;
		}
}
}
