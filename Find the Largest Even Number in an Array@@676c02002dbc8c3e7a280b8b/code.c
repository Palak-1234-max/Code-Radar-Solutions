// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int max;
    if(a[i]%2==0){
            max=a[0];
            for(i=0;i<n;i++){
                if(a[i]>max){
                    max=a[i];
                }
            }
        }
        else{
            max=-1;
        }
    }
    printf("%d",max);
    return 0;
}