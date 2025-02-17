// Your code here...
#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    i=1;
    while(i<=10){
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
}