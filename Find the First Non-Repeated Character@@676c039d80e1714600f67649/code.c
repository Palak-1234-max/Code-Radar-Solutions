// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i,j,count,found=0;
    for(i=0;a[i]!='\0';i++){
        count=1;
        for(j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j]){
                count++;
                a[j]='-';
            }
        }
        if(count==1 && a[i]!='-'){
            printf("%c",a[i]);
            found=1;
            break;
        }
    }
    if(!found){
        printf("-");
    }
    return 0;
}