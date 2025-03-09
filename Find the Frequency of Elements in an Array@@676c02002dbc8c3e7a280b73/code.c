// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int freq;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            freq=0;
            if(a[j]==a[i]){
                freq++;
            }
            printf("%d %d",a[i],freq);
        }
    }
    return 0;
}