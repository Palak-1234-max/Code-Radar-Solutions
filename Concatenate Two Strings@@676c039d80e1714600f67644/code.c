// Your code here...
#include <stdio.h>
int main(){
    char a[100],b[50];
    int i,j;
    fgets(a, sizeof(a), stdin);  
    fgets(b, sizeof(b), stdin);
    if (a[strlen(a) - 1] == '\n') {
        a[strlen(a) - 1] = '\0';
    }
    if (b[strlen(b) - 1] == '\n') {
        b[strlen(b) - 1] = '\0';
    }
    i=j=0;
    while(a[i]!='\0'){
        i++;
    }
    while(b[j]!='\0'){
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    printf("%s",a);
    return 0;
}