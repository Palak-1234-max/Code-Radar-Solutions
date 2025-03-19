// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i,j,flag,foundUnique=0;
    char temp;
    for(i=0;a[i]!='\0';i++){
        flag=0;
        for(j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j]){
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