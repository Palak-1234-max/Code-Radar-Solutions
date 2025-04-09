#include <stdio.h>
#include <string.h>
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
    for(j=0;b[j]!='\0';i++,j++){
        a[i]=b[j];
    }
    a[i]='\0';
    puts(a);
    return 0;
}