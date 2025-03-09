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
    for(i=1;i<n;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            fpeak=a[i];
            break;
        }
        else{
            printf("-1");
        }
    }
    printf("%d",fpeak);
    return 0;
}