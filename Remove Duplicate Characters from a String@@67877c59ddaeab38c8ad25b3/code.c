// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i,j;
    for(i=0;a[i]!='\0';i++){
        for(j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j]){
                for (int k = j; a[k] != '\0'; k++) {
                    a[k] = a[k + 1];
                }
                j--;
            }
        }
    }
    printf("%s",a);
    return 0;
}