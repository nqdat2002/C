#include<stdio.h>
#include<string.h>
int max(int a,int b){
    return (a>b)?a:b;
}
main(){
    char a[55];
    int F[55],n,kq=1,i,j;
    scanf("%s",a); n=strlen(a);
    for(i=0; i<n; i++){
        F[i] = 1;
        for(j=0; j<i; j++)
            if(a[j]<a[i])
                F[i] = max(F[i],F[j]+1);
        kq = max(kq,F[i]);
    }
    printf("%d",26-kq);
}