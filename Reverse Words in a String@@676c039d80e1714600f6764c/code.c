#include <stdio.h>
#include <string.h>
int main(){
    char a[50];
    int start,end;
    fgets(a, sizeof(a), stdin);
    int len=strlen(a);
    if(a[len-1]=='\n'){
        a[len-1]='\0';
    }
    start=0;
    for(int i=0;i<=len;i++){
        if(a[i]==' ' || a[i]=='\0'){
            end=i-1;
            while(start<end){
                char temp;
                temp=a[start];
                a[start]=a[end];
                a[end]=temp;
                start++;
                end--;
            }
            start=i+1;
        }
    }
    printf("%s\n",a);
    return 0;
}