// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int max=-1,count=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            if(a[i]>max){
                max=a[i];
            }
            count++;
        }
    }
    if(count==0){
        printf("-1");
    }
    else{
        printf("%d",max);
    }
    return 0;
}