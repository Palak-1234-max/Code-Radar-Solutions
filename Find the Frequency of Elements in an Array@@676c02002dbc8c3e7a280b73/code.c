// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            int freq=0;
            if(a[j]==a[i]){
                freq++;
            }
            printf("\n%d %d",a[i],freq);
        }
    }
    return 0;
}