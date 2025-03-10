// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int count=0;
    for(i=0;i<n;i++){
        if(a[i]>=2){
            int isPrime=1;
            for(j=2;j*j<=a[i];j++){
                if(a[i]%j==0){
                    isPrime=0;
                    break;
                }
            }
            if(isPrime==1){
                count++;
            }
        }
    }
    printf("%d",count);
}