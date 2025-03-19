// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i,j,flag;
    for(i=0;a[i]!='\0';i++){
        flag=0;
        for(j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j]){
                a[j]=a[j+1];
            }
        }
    }
    printf("%s",a);
    return 0;
}