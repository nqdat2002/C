#include<stdio.h>
#include<math.h> 
#include<stdbool.h>  //true-false
int kiemtra1(int n){   //kieu tra? ve` so'
	int i,count=0;
	if(n<2) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) count=1;		
	}
	if(count!=0) return 0;  //tra ve sai
	else return 1;   //tra ve dung
}
bool kiemtra2(int n){   //tra? ve kieu chu~
	int i,count=0;
	if(n<2) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) count=1;			
	}
	if(count!=0) return false;   //tra ve sai
	else return true;			//tra ve dung
}
// so hoa`n hao?, so strong, so nguye^n to^', so chinh' phuong, so fibonacci, so thua^n nghi.ch
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m;
		scanf("%d",&m);
		if( kiemtra2(m)==true) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}