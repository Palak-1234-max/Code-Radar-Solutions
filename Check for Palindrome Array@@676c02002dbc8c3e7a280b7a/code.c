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
    int flag;
    for(int i=0;i<n;i++){
        flag = 0;
        if(a[i]==b[i]){
            flag=1;
        }
    }
    if(flag==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}