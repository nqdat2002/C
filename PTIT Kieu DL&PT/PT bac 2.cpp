#include <stdio.h>
#include <math.h>
int main()
	{
		float a,b,c,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	float D=b*b-4*a*c;
		if(a!=0)
			{
			if (D<0) printf("NO");
			if (D==0) printf("%.2f",-b/2*a);
			if (D>0) printf("%.2f %.2f",x1=(-b+sqrt(D))/(2*a),(x2=(-b-sqrt(D))/(2*a)) ) ;
			}
		else{
			if (b==0)
		{
			if(c==0||c!=0) printf("\nNO");}
			else printf("%0.2f",-c/b);}
	return 0;
	}