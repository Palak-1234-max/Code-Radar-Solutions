// Your code here...
#include <stdio.h>
int main(){
    char a[100],b[50];
    int i,j;
    fgets(a, sizeof(a), stdin);
    i=0;
    while(a[i]!=0){
        i++;
    }
    j=0;
    while(a[j]!=0){
        a[i]=b[j];
        j++;
        i++;
    }
    printf("%d",a);
    return 0;
}