// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>0 && a[j]>=0){
                if(a[j]!=a[i]+1){
                    printf("%d",a[i]+1);
                    break;
                }
                else if(a[j]!=a[i]-1){
                    printf("%d",a[i]-1);
                    break;
                }
            }
        }
    }
    return 0;
}