#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %c",&a,&b,&c);
    if(c='+')
    printf("%d",(a+b));
    else if(c='-')
    printf("%d",(a-b));
    else if(c='*')
    printf("%d",(a*b));
    else if(c='/')
    printf("%d",(a/b));
    return 0;
}