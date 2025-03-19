// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i;
    for(i=0;a[i]!=0;i++){
        if((a[i]>='a' && a[i]<='z') || a[i]>='A' && a[i]<='Z'){
            if(a[i]>='a' && a[i]<='z'){
                a[i]=a[i]-32;
            }
        }
    }
    printf("%s",a);
    return 0;
}