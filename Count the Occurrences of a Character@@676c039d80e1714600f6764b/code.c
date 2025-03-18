// Your code here...
#include <stdio.h>
int main(){
    char a[50];
    fgets(a, sizeof(a), stdin);
    char c;
    int freq=0,i;
    scanf("%c",c);
    for(i=0;a[i]!='\0';i++){
        freq++;
    }
    printf("%d",freq);
    return 0;
}