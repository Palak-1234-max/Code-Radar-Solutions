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
        for(j=i+1;j<n;j++){
            if(a[i]<=a[j] || a[i]>=a[j]){
                flag=1;
            }
            else{
                flag=0;
            }
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