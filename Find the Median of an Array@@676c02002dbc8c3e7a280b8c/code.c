// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }

    int median;
    if(n%2==0){
        for(i=0;i<=n/2;i++){
            median=a[i];
        }
    }
    else{
        for(i=0;i<=n/2;i++){
            median=(a[i]+a[i+1])/2;
        }
    }
    printf("%d",median);
    return 0;
}