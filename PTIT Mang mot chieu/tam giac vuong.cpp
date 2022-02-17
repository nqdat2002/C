#include <stdio.h>
#include<stdbool.h>

bool tg(long long int arr[], int n)
{
int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
    for ( i = 0; i < n; i++)
      arr[i] = arr[i] * arr[i];

    for ( i = n - 1; i >= 2; i--) {
        int l = 0; 
        int r = i - 1; 
        while (l < r) {
           
            if (arr[l] + arr[r] == arr[i])
                return true;
 
            (arr[l] + arr[r] < arr[i]) ? l++ : r--;
        }
    }

    return false;
}
int main() {
	int n,i,j,a;
	long long M[5000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		for(j=0;j<a;j++){
			scanf("%lld",&M[j]);
			}
		if(tg(M,a))
		printf(	"YES\n");
		else
		printf("NO\n");
		
		}
	return 0;

}