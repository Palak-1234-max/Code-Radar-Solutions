// Your code here...
#include <stdio.h>
int main(){
    char a[50],b[50];
    int i,j,flag=0;
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    for(i=0;a[i]!='\0';i++){
        for(j=0;a[j]!='\0';j++){
            if(a[i]!=a[j]){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}