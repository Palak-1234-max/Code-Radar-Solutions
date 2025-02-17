// Your code here...
#include <stdio.h>
int main(){
    int n,i,b,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(b=1;b<=n-i;b++){
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
}