// Your code here...
#include <stdio.h>
int main(){
    int n,i,sum;
    scanf("%d",&n);
    i=1; sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
}