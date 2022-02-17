#include<stdio.h>
int main(){
	int t,n;
	scanf("%d",&n);
	while(n--){
		char a;
		scanf("\n%c",&a);
		if(a>=65&&a<=90){
			printf("%c\n",a+32);
		
		}
		if(a>=97&&a<=122){
			printf("%c\n",a-32);
		}
	}
}