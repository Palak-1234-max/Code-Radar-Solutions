// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int h=a&(-a);
    int t=0;
    while(h>1){
        h>>=1;
        t++;
    }
    printf("%d",t);
    return 0;
}