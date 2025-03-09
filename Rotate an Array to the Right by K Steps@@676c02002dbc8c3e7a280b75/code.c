// Your code here...
#include <stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    scanf("%d",&k);
    k = k%n;
    int temp[n];
    for(i=0;i<n;i++){
        temp[(i+k)%n] = a[i];
    }
    for(i=0;i<n;i++){
        a[i]=temp[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}