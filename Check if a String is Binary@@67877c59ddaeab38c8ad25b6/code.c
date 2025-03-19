// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i,flag;
    for(i=0;a[i]!=0;i++){
        flag=0;
        if(a[i]==0 || a[i]==1){
            flag=1;
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