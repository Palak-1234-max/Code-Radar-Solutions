// Your code here...
#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
        int num=a[i];
        int sum=0;
        if(num<0){
            num=-a[i];
        }
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        printf("%d ",sum);
    }
    return 0;
}