#include<stdio.h>
#include<math.h>
int main(){
	int n,i,a,b,c,d;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(abs(c-a)==abs(d-b))
		printf("YES\n");
		else
		printf("NO\n");
		}
	
	}
