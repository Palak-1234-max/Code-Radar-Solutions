// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int max=a[0],smax=INT_MIN;
    for(i=0;i<n;i++){
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax && smax!=max){
            smax=a[i];
        }
    }
    printf("%d",max*smax);
    return 0;
}