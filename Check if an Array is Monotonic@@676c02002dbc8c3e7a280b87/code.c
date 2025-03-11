// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int flag = 1;  // Assume monotonic initially
    int isPalindrome = 1;  // Assume palindromic initially
    int isNonDecreasing = 1, isNonIncreasing = 1;
    for(i = 0; i < n - 1; i++){
        if(a[i] > a[i + 1]) {
            isNonDecreasing = 0;  // Found a decrease, so it's not non-decreasing
        }
        if(a[i] < a[i + 1]) {
            isNonIncreasing = 0;  // Found an increase, so it's not non-increasing
        }
    }
    for(i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            isPalindrome=0;
            break;
        }
    }
    if(isNonDecreasing || isNonIncreasing || isPalindrome==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}