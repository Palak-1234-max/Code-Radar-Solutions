#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,result;
    scanf("%d",&a);
    result = ~a;
    printf("%d", result);
    return 0;
}