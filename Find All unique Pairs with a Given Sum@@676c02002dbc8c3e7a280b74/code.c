// Your code here...
#include <stdio.h>
int main(){
    int n,i,j,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
            if((a[i]+a[j])==t){
                printf("%d %d\n",a[i],a[j]);
                if(a[i]==a[j]){
                    break;
                }
            }
            if(a[i]==a[j]){
                break;
            }
        }
    }
    return 0;
}