// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    b,a=a,b;
    printf("%d %d",b,a);
    return 0;
}