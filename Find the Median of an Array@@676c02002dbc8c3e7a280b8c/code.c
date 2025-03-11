// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }

    int median;
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(a[i] > a[j]) {
                // Swap a[i] and a[j]
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    if(n%2==0){
        for(i=0;i<=n/2;i++){
            median=a[i];
        }
    }
    else{
        for(i=0;i<=n/2;i++){
            median=(a[i]+a[i+1])/2;
        }
    }
    printf("%d",median);
    return 0;
}