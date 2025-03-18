// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[50],b[50];
    int i,j,flag=0;
    fgets(a, sizeof(a), stdin);
    j=0;
    for(i=strlen(a)-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    for(i=0;i<strlen(a);i++){
        if(a[i]!=b[i]){
            flag=1;
            break;
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