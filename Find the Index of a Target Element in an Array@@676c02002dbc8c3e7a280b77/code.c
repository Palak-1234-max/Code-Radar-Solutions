// Your code here...
#include <stdio.h>
int main(){
    int n,k,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    scanf("\n%d",&k);
    for(i=0;i<n;i++){
        if(a[i]==k){
            printf("%d",i);
            break;
        }
        else if(a[i]!=k){
            printf("-1");
            break;
        }
    }
    printf("-1");
    return 0;
}