// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i;
    for(i=0;a[i]!=0;i++){
        if(a[i]==' '){
            a[i]=a[i+1];
            a[i+1]=' ';
        }
        i=i-1;
    }
    printf("%s",a);
    return 0;
}