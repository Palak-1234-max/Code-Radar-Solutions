// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[50],b[50];
    int i,j;
    scanf("%d",&a);
    j=0;
    for(i=strlen(a)-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    printf("%s",b);
    return 0;
}