// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    char ch;
    scanf("%c",&ch);
    int i;
    for(i=0;a[i]!=0;i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
            a[i]=ch;
        }
    }
    printf("%s",a);
    return 0;
}