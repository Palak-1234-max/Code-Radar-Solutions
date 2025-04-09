#include <stdio.h>
#include <string.h>
int main(){
    char a[50];
    int start,end;
    fgets(a, sizeof(a), stdin);
    if(a[strlen(a)-1]=='\n'){
        a[strlen(a)-1]='\0';
    }
    start=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' ' || a[i]=='\n'){
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
    puts(a);
    return 0;
}