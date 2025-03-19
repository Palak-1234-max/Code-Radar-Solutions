// Your code here...
#include <stdio.h>

int isPrime(int a) {  // Change the return type to int
    int i, count = 0;
    for(i = 1; i <= a; i++) {
        if(a % i == 0) {
            count++;
        }
    }
    if(count == 2) {
        return 1;  // Return 1 for prime
    } else {
        return 0;  // Return 0 for non-prime
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));  // Print the return value of isPrime
    }
    return 0;
}
