// Your code here...
#include <stdio.h>
int main(){
    char a[100],b[50];
    int i,j;
    fgets(a, sizeof(a), stdin);  
    fgets(b, sizeof(b), stdin);
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