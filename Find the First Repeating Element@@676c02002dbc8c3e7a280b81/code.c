// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int flag=0,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                flag=1;
                temp=a[i];
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==1){
        printf("%d",temp);
    }
    else{
        printf("-1");
    }
    return 0;
}