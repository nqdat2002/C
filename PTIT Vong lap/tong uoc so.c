#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
	long int n,a,i,j,sum=0,m;
	scanf("%li",&n);
	bool N[2000000];
  for (i = 2; i <= 2000000; i++) {
    N[i] = true;
  }
  for (i = 2; i <= sqrt(2000000); i++) {
    if (N[i] == true) {
      for (j = 2 * i; j <= 2000000; j += i) {
        N[j] = false;
      }
    }
  }
	for(i=0;i<n;i++){
		scanf("%li",&a);
			j=2;
			while(j<=a){
				if(N[a]) {sum+=a;break;} 
				if(N[j]){
					if(a%j==0)
					{
						while (a%j==0) 
						{
						sum+=j;
						a/=j;
						}
					}	
				}
				j++;
			}
		}
	
	printf("%li",sum);

}
