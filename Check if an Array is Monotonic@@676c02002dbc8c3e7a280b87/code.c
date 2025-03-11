// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int flag=0;
    for(i=0;i<n;i++){
        if((a[i]<=a[i+1] || a[i]>=a[i+1]) && a[i]!=a[n-i-1]){
            flag=1;
        }
        
    }
    if(flag==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}