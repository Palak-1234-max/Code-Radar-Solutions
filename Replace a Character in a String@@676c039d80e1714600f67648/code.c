// Your code here...
#include <stdio.h>
int main(){
    char a[50];
    fgets(a, sizeof(a), stdin);
    char b,c,i;
    scanf("%c",&b);
    scanf("\n%c",&c);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==b){
            a[i]=c;
        }
    }
    printf("%s",a);
    return 0;
}