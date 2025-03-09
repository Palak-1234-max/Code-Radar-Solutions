// Your code here...
#include <stdio.h>
int main(){
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
    int fpeak;
    for(i=1;i<n+1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            fpeak=a[i];
            printf("%d",fpeak);
            break;
        }
        else{
            printf("-1");
        }
    }
    return 0;
}