#include<stdio.h>
#include<string.h>
struct qlsv{
	int ma;
	char M[100];
	float a,b,c;
};
int main(){
	struct qlsv sv[100];
	int n,a,i,b;
	int dem=0;
	while(1){
	scanf("%d",&n);
	if(n==1){
		scanf("%d",&a);
		printf("%d\n",a);
		for (i=0;i<a;i++) {
				scanf(" %[^\n]",sv[dem++].M);
				scanf("%f%f%f",&sv[dem-1].a,&sv[dem-1].b,&sv[dem-1].c);
			}
		continue;
	}
	if(n==2){
		scanf("%d\n",&b);
		printf("%d\n",b);
		scanf("%[^\n]",sv[b-1].M);
		scanf("%f%f%f",&sv[b-1].a,&sv[b-1].b,&sv[b-1].c);
		continue;
	}
	if(n==3){
		for(i=dem-1;i>=0;i--)
		if(sv[i].a<=sv[i].b&&sv[i].b<=sv[i].c)
		    printf("%d %s %0.1f %0.1f %0.1f\n",i+1,sv[i].M,sv[i].a,sv[i].b,sv[i].c);
			break;
		}
		}
	return 0;
}
