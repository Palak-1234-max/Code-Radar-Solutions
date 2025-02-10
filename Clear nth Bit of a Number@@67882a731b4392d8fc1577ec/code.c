#include <stdio.h>

int main() {
    int a,b,result;
    scanf("%d %d",&a,&b);
    result = (a>>b) & 1;
    if (result==1)
    result = 0;
    printf("%d", result);
    return 0;
}