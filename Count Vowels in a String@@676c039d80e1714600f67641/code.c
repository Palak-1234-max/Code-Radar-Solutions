// Your code here...
#include <stdio.h>
int main(){
    char a[50];
    int i,vow=0;
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z')){
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
                vow++;
            }
        }
    }
    printf("%d",vow);
    return 0;
}