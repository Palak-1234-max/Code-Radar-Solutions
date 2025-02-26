#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, i;
    scanf("%d", &a);

    if (a <= 1) {
        printf("Not Prime\n");
        return 0;
    }

    for (i = 2; i < a; i++) {
        if (a % i == 0) {
            printf("Not Prime\n");
            return 0;
        }
    }

    printf("Prime\n");
    return 0;
}