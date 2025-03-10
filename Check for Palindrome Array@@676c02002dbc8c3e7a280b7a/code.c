// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int b[n]=a[n];
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    if(a[n]==b[n]){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}