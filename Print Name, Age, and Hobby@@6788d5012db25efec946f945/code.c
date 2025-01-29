#include <stdio.h>

int main() {
    char name[20];
    int age;
    char hobby[30];
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}