// Your code here...
#include <stdio.h>
int main(){
    char a[50];
    int i;
    fgets(a, sizeof(a), stdin);
    i=0;
    while(a[i]!='\0'){
        i++;
    }
    printf("%d",i);
    return 0;
}