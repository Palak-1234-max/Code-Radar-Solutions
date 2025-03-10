// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[n-i-1];
    }
    for(i=0;i<n;i++){
        if(a[i]==b[i]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}