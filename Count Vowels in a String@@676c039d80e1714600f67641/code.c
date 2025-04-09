#include <stdio.h>
#include <ctype.h>
int main(){
    char a[50];
    fgets(a, sizeof(a), stdin);
    int i,vow=0;
    for(i=0;a[i]!='\0';i++){
        if(isalpha(a[i])){
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
                vow++;
            }
        }
    }
    printf("%d",vow);
}