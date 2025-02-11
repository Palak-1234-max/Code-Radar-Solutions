#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,sum,sub,mul,div;
    char oprator;
    scanf("%d %d %c",&a,&b,&oprator);
    switch(oprator)
    {
        case '+': printf(a+b);
        break;
        case '-': printf(a-b);
        break;
        case '*': printf(a*b);
        break;
        case '/': printf(a/b);
        break;
        default: printf("error");
    }
}