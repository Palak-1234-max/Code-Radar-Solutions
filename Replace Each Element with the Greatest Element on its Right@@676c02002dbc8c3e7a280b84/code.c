// Your code here...
#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int max;
    for(i=0;i<n;i++){
        max=a[1];
        for(j=1;j<n;j++){
            if(a[i]>max){
                max=a[i];
            }
            a[i]=max;
        }
        a[n-1]=-1;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}