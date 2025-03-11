// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int max,count=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            max=a[0];
            for(j=0;j<n;j++){
                if(a[j]>max){
                    max=a[j];
                }
            }
            count++;
        }
    }
    for(i=0;i<n;i++){
        if(count==0){
            max=-1;
        }
    }
    printf("%d",max);
    return 0;
}