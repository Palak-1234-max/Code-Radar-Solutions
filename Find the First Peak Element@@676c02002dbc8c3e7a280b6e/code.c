// Your code here...
#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int fpeak=-1;
    for(i=0;i<n-2;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            fpeak=a[i];
            printf("%d",fpeak);
            break;
        }
    }
    if(fpeak==-1){
        printf("-1");
    }
    return 0;
}