// Your code here...
#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
        if(a[i]<= a[i+1] && a[i-1]<a){
        printf("Sorted");
        }
        else{
        printf("Not Sorted");
        }
    }
    
    return 0;
}