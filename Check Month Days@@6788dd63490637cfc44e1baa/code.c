#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    switch(a){
        case 1,3,5,7,8,10,12: 
        printf("31");
        break;
        case 2:
        printf("28");
        break;
        case 4,6,9,11:
        printf("30");
        break;
    }
    return 0;
}