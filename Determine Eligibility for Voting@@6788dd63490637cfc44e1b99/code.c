#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a);
    if(a<18)
    printf("Not Eligible");
    else
    printf("Eligible");
    return 0;
}