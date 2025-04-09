#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    if(a[strlen(a)-1]=='\n'){
        a[strlen(a)-1]='\0';
    }
    int i,j;
    for(i=0,j=0;a[i]!='\0';i++,j++){
        if(a[i]!=' '){
            a[j]=a[i];
        }
    }
    puts(a);
    return 0;
}