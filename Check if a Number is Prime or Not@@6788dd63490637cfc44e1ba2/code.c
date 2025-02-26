#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a%1==0 && a%a==0)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}