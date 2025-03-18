// Your code here...
#include <stdio.h>
int main(){
    char a[50],b[50];
    int i,j,flag;
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    for(i=0;a[i]!='\0';i++){
        flag=0;
        for(j=0;b[j]!='\0';j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}