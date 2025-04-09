#include <stdio.h>
int main(){
    char str[50],rev[50];
    fgets(str, sizeof(str), stdin);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    int i=0;
    while(str[i]!='\0'){
        rev[i]=str[count-1-i];
        i++;
    }
    rev[i]='\0';
    return 0;
}