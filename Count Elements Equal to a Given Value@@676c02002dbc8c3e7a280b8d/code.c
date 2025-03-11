// Your code here...
#include <stdio.h>
int main(){
    int n,k,i;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int count=0;
    for(i=0;i<n;i++){
        if(a[i]==k){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}