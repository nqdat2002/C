#include<stdio.h>
#include<math.h>
struct toado{
	float x,y;
};
int main(){
	int n,i;
	scanf("%d",&n);
	struct toado A,B,C;
	for(i=0;i<n;i++){
		scanf("%f%f%f%f%f%f",&A.x,&A.y,&B.x,&B.y,&C.x,&C.y);
		double a=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
		double b=sqrt((A.x-C.x)*(A.x-C.x)+(A.y-C.y)*(A.y-C.y));
		double c=sqrt((B.x-C.x)*(B.x-C.x)+(B.y-C.y)*(B.y-C.y));
		if(a<b+c&&b<a+c&&c<a+b)
		printf("%0.3lf\n",a+b+c);
		else
		printf("INVALID\n");
	}
	return 0;
}
