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
    int flag=0;
    for(i=0;i<n;i++){
        if(a[i]==k){
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("-1");
    }
    return 0;
}