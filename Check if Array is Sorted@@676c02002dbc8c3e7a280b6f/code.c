// Your code here...
#include <stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int isSorted = 1;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            isSorted=0;
            break;
        }
    }
    if (isSorted == 0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}