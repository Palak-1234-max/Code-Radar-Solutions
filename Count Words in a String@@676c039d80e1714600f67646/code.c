// Your code here...
#include <stdio.h>
int main(){
    char a[50];
    int i,word=1;
    scanf("%s",&a);
    i=0;
    while(a[i]!=0)
    {
        if(a[i]==' ')
        word++;
        i++;
    }
    printf("%d",word);
    return 0;
}