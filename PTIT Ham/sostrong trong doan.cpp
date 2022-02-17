#include<stdio.h>
#include<stdbool.h>
bool check(int n)
{
	int a=n;int s=0;
	while(n>0){
	int i=n%10; int gt=1;
	n=n/10;
	int j;
	for(j=1;j<=i;j++){
		gt=gt*j;}
	s=s+gt;		}
	if(s==a) return true;
	else return false;
}
int main()
{
    int n;
    int a,b;
    scanf("%d%d",&a,&b);
	if(b>a){
    for(n=a;n<=b;n++){ 			
    if(check(n))
        printf("%d ",n);}}
    else     
    {for(n=b;n<=a;n++){ 			
    if(check(n))
        printf("%d ",n);}}  
return 0;        
}