#include <stdio.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
    int word=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            word++;
        }
    }
    printf("%d",word);
    return 0;
}