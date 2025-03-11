// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int flag=1;
    int isPalindrome=1;
    for(i=0;i<n-1;i++){
        if(a[i]<a[i+1] || a[i]>a[i+1]){
            flag=0;
        }
    }
    for(i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            isPalindrome=0;
            break;
        }
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                flag=1;
            }
        }
    }
    if(flag==1 || isPalindrome==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}