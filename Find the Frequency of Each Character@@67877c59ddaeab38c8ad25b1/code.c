// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i,j,freq=1;
    for(i=0;a[i]!='\0';i++){
        for(j=i+1;a[j]!=0;j++){
            if(a[i]==a[j])
                freq++;
        }
    }
    for(i=0;a[i]!=0;i++){
        printf("%c: %d",a[i],freq);
    }
    return 0;
}