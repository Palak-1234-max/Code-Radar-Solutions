// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int count=1;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]==a[i]+1 || a[j]==a[i]-1){
                count++;
            }
        }
    }
    printf("%d",count);
}