// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i,j,freq;
    for(i=0;a[i]!='\0';i++){
        freq=1;
        for(j=i+1;a[j]!=0;j++){
            if(a[i]==a[j]){
                freq++;
                temp=freq;
            }
        }
    }
    for(i=0;a[i]!=0;i++){
        printf("%c: %d\n",a[i],temp);
    }
    return 0;
}