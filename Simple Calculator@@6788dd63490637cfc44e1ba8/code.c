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
        case '+': a+b;
        break;
        case '-': a-b;
        break;
        case '*': a*b;
        break;
        case '/': a/b;
        break;
        default: printf("error");
    }
}