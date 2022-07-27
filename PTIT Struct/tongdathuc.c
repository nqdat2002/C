#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct dathuc{
    int heso,somu;
} P[100],Q[100];
int n,m;
int taodathuc(char s[],struct dathuc P[]){
    int i=0;
    char *p = strtok(s,"*x^+ ");
    while(p!=NULL){
        P[i].heso = atoi(p);
        p = strtok(NULL,"*x^+ ");
        P[i].somu = atoi(p);
        i++;
        p = strtok(NULL,"*x^+ ");
    }
    return i;
}
void cong(){
    struct dathuc S[100];
    int i=0,j=0,d=0;
    while(i<n&&j<m){
        if(P[i].somu>Q[j].somu) S[d++] = P[i++];
        else if(P[i].somu<Q[j].somu) S[d++] = Q[j++];
        else {
            S[d].somu = P[i].somu;
            S[d].heso = P[i].heso + Q[j].heso;
            d++; i++; j++;
        }
    }
    while(i<n) S[d++] = P[i++];
    while(j<m) S[d++] = Q[j++];

    for(i=0;i<d-1;i++)
        printf("%d*x^%d + ",S[i].heso,S[i].somu);
    printf("%d*x^%d\n",S[d-1].heso,S[d-1].somu);
}
main(){
    int t; char s1[200],s2[200];
    scanf("%d\n",&t);
    while(t--){
        gets(s1); gets(s2);
        n = taodathuc(s1,P);
        m = taodathuc(s2,Q);
        cong();
    }
}
