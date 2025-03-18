// Your code here...
#include <stdio.h>
int main(){
    char a[50];
    int i,word=1;
    fgets(a, sizeof(a), stdin);
    if(a[i]=='\n'){
        a[i]='\0';
    }
    if((a[i]>='a' && a[i]<='z') ||(a[i]>='A' && a[i]<='Z'))
    {i=0;
    while(a[i]!=0)
    {
        if(a[i]==' ') word++;
        i++;
    }}
    printf("%d",word);
    return 0;
}