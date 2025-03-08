// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    if(a[i-1]<a[i]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}