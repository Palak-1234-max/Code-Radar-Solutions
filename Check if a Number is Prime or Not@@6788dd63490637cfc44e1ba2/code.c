#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);

    // Numbers less than or equal to 1 are not prime
    if (a <= 1) {
        printf("Not Prime\n");
    } else {
        int isPrime = 1;  // Assume the number is prime initially

        // Check divisibility from 2 to the square root of a
        for (int i = 2; i <= (a)**2; i++) {
            if (a % i == 0) {
                isPrime = 0;  // a is divisible by i, so it's not prime
                break;
            }
        }

        if (isPrime) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }

    return 0;
}