// Your code here...
#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int isPalindrome=0;
    int temp, reversedNum = 0, remainder;
    for(i=0;i<n;i++){
        int temp=a[i];
        while(a[i]!=0){
            remainder = a[i] % 10;          // Get the last digit
            reversedNum = reversedNum * 10 + remainder;  // Build the reversed number
            a[i] /= 10;                     // Remove the last digit
        }
        if(temp==reversedNum){
            isPalindrome++;
        }
    }
    printf("%d",isPalindrome);
    return 0;
}