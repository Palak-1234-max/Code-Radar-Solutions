// Your code here...
#include <stdio.h>
int main(){
    int n,i,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
            if((a[i]+a[j])==t){
                printf("%d %d",a[i],a[j]);
            }
        }
    }
    return 0;
}