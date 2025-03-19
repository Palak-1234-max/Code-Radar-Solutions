// Your code here...
#include <stdio.h>
int main(){
    int a[100];
    int i,flag=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++){
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