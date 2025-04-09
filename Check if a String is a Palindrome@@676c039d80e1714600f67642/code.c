#include <stdio.h>
int main(){
    char a[50], rev[50];
    fgets(a, sizeof(a), stdin);
    int i,count=0;
    for(i=0;a[i]!='\0';i++){
        count++;
    }
    int j;
    for(j=0;a[j]!='\0';j++){
        rev[j]=a[count-1-j];
    }
    rev[j]='\0';
    int flag=0;
    for(int k=0;a[k]!='\0';k++){
        if(a[k]!=rev[k]){
            flag=1;
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