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
        for(j=i+1;j<n;j++){
            if(a[i]>=a[j]){
                printf("%d ",a[i]);
                break;
            }
            else{
                break;
            }
        }
    }
    printf("%d",a[n-1]);
    return 0;
}