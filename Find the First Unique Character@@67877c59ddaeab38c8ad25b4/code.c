// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    int i,j,flag,foundUnique=0;
    for(i=0;a[i]!='\0';i++){
        flag=0;
        for(j=0;a[j]!='\0';j++){
            if(i != j && a[i] == a[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%c",a[i]);
            foundUnique=1;
            break;
        }
    }
    if(!foundUnique){
        printf("-");
    }
    return 0;
}