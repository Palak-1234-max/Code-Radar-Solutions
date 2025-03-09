// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[n],i,j;
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
        int freq=1;
        if(a[i]!=-1){
            for(j=i+1;j<n;j++){
                if(a[j]==a[i]){
                    freq++;
                    a[j]=-1;
                }
            }
        }
        printf("%d %d\n",a[i],freq);
    }
    return 0;
}