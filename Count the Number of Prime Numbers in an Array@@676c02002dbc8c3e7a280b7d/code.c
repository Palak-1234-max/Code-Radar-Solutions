// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int count = 0;
    for(i=0;i<n;i++){
        if(a[i]>=2){
            for(j=2;j<=a[i];j++){
                if(a[i]%2!=0){
                    count++;
                }
                break;
            }
        }
    }
    printf("%d",count);
}