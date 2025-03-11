// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int min=a[0],smin=INT_MAX;
    for(i=0;i<n;i++){
        if(a[i]<min){
            smin=min;
            min=a[i];
        }
        else if(a[i]<smin && a[i]!=min){
            smin=a[i];
        }
    }
    if(smin==INT_MAX){
        printf("-1");
    }
    else{
        printf("%d",smin);
    }
    return 0;
}