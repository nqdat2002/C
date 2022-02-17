#include<stdio.h>
#include<string.h>
struct Thukhoa{
	int stt;
	char M[100],N[100];
	float a,b,c;
};
void tao(struct Thukhoa sv[],int n){
	int i;
	for(i=0;i<n;i++){
		sv[i].stt=i+1;
		gets(sv[i].M);gets(sv[i].N);
		if(i<n-1)
		scanf("%f%f%f\n",&sv[i].a,&sv[i].b,&sv[i].c);
		else
		scanf("%f%f%f",&sv[i].a,&sv[i].b,&sv[i].c);
	}
}
void SapXep(struct Thukhoa sv[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(sv[i].a+sv[i].b+sv[i].c<sv[j].a+sv[j].b+sv[j].c){
				struct Thukhoa s=sv[i];
				sv[i]=sv[j];
				sv[j]=s;
			}
		}
	}
}
void Xuat(struct Thukhoa sv[],int n){
	int j;
	for(j=0;j<n;j++)
	{
		if(sv[j].a+sv[j].b+sv[j].c<sv[0].a+sv[0].b+sv[0].c)
			break;
		printf("%d %s %s %0.1f\n",sv[j].stt,sv[j].M,sv[j].N,sv[j].a+sv[j].b+sv[j].c);
	}
}
int main(){
	struct Thukhoa sv[100];
	int n;
	scanf("%d\n",&n);
	tao(sv,n);
	SapXep(sv,n);
	Xuat(sv,n);
	return 0;
}