// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i,j,count=0;
    for(i=0;a[i]!='\0';i++){
        for(j=1;a[j]!='\0';j++){
            if(a[i]==a[j]){
                count++;
            }
        }
    }
    if(count==1){
        printf("%c",a[i]);
    }
    else{
        printf("-");
    }
    return 0;
}