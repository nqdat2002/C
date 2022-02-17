#include<stdio.h>
#include<string.h>
#include<math.h>
struct toado{
	int x,y;
};
int main(){
	struct toado A,B,C,D;
	scanf("%d%d%d%d",&A.x,&A.y,&B.x,&B.y);
	int i=A.x-B.x;
	int j=A.y-B.y;
	float cons=sqrt(i*i+j*j);
	if(i*1+j*0==0){
		C.y=A.y;
		C.x=cons*cons+A.x;
		D.x=C.x;
		D.y=B.y;
		printf("%d %d %d %d",C.x,C.y,D.x,D.y);
	}
	else if(i*0+j*1==0){
		D.x=A.x;
		C.x=B.x;
		D.y=cons*cons+A.y;
		C.y=D.y;
		printf("%d %d %d %d",C.x,C.y,D.x,D.y);	
	}
}
