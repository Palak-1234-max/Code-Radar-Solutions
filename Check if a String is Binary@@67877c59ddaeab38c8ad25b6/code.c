// Your code here...
#include <stdio.h>

int main() {
    char a[100]; 
    int i, isBinary = 1; 
    scanf("%s", a);

    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] != '0' && a[i] != '1') {
            isBinary = 0; 
            break;
        }
    }

    if (isBinary) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
