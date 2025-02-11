#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,sum,sub,mul;
    float div;
    char oprator;
    scanf("%d %d %c",&a,&b,&oprator);
    switch(oprator)
    {
        case '+': sum=a+b; 
        printf("%d",sum);
        break;
        case '-': sub=a-b;
        printf("%d",sub);
        break;
        case '*': mul=a*b;
        printf("%d",mul);
        break;
        case '/': div=a/b;
        printf("%f",div);
        break;
        default: printf("error");
    }
}