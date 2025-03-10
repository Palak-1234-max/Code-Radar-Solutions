// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
        int a1=a[i]%10;
        int a2=a[i]/10;
        int sum=a1+a2;
        for(j=0;j<n;j++){
        printf("%d ",sum);
    }
    }
    return 0;
}