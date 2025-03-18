// Your code here...
#include <stdio.h>
int main(){
    char a[100],b[50];
    int i,j;
    scanf("%s",&a);
    scanf("\n%s",&b);
    i=0;
    while(a[i]!=0){
        i++;
    }
    j=0;
    while(b[j]!=0){
        a[i]=b[j];
        j++;
        i++;
    }
    a[i]='\0';
    printf("%s",a);
    return 0;
}