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
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(a[i]<=a[j]){
                printf("Sorted");
                break;
            }
            else{
                printf("Not Sorted");
                break;
            }
        }
    }
    return 0;
}