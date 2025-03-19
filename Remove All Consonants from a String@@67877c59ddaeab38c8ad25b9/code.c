// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i;
    for(i=0;a[i]!=0;i++){
        if(a[i]==' ' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
            printf("%c",a[i]);
        }
    }
    return 0;
}