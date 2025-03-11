// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int h=0;
    while((a & (1<<31))==0){
        a<<=1;
        h++;
    }
    printf("%d",h);
    return 0;
}