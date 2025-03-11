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
    }
    if(flag==0){
        printf("YES");
    }
    else if(isPalindrome==0){
        printf("NO");
    }
    else{
        printf("NO");
    }
    return 0;
}