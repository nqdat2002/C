#include<stdio.h>
int main(){
	char s[10];
	gets(s);
	int h,k,j;
	h=s[0]-48;
	k=s[4]-48;
	j=s[8]-48;
	if(h+k==j) printf("YES");
	else printf("NO");
}