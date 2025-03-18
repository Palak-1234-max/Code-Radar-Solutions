// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[50];
    int i,word=0, inword=0;
    fgets(a, sizeof(a), stdin);
    if (a[strlen(a) - 1] == '\n') {
    a[strlen(a) - 1] = '\0';
    }
    i=0;
    while(a[i]!=0)
    {
        if(a[i]!=' ' && !inword){
            word++;
            inword=1;
        }
        else if(a[i]==' '){
            inword=0;
        }
        i++;
    }
    printf("%d",word);
    return 0;
}