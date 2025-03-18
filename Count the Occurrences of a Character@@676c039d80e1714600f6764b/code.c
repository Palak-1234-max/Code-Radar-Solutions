// Your code here...
#include <stdio.h>
int main(){
    char a[50];
    fgets(a, sizeof(a), stdin);
    char c;
    scanf("%c",c);
    int freq=0,i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==c){
            freq++;
        }      
    }
    printf("%d",freq);
    return 0;
}