// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int count;
    for(i=0;i<n;i++){
        count=0;
        for(j=i+1;j<n;j+=){
            if(a[i]==a[j]){
                count++;
                temp=a[i];
            }
        }
    }
    printf("%d",temp);
    return 0;
}