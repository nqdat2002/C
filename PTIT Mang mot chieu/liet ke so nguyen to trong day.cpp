#include<stdio.h> 
#include<math.h> 
int nhap(int a[],int n){
	int i;
  for(i=0;i<n;i++)
 	 {	 
  		scanf("%d",&a[i]); }
		   } 
int snt(int n){
if(n<2) 
return 0; 
else {
	int i;
 for(i=2;i<n;i++)
 { if(n%i==0) return 0; } 
 return 1; } 
} 
int main()
{ 
	int n,a[100],x=0,dem=0; 
	scanf("%d",&n); 
	nhap(a,n); 
	int j;
	for(j=0;j<n;j++)
	{ 	if(snt(a[j])==1){ dem++; } }
		 printf("%d ",dem); 
	for(int j=0;j<n;j++)
	{
		if(snt(a[j])==1){ printf("%d ",a[j]); } 
	}
return 0; 
}