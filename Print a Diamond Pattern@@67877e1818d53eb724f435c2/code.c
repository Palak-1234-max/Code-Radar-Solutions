// Your code here...
#include <stdio.h>
int main(){
    int i,j,b,n,a,d,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(b=1;b<=n-i;b++){
            printf(" ");
        }
        for(j=1;j<=(i*2)-1;j++){
            printf("*");
        }
        printf("\n");
    }
    
    for(a=1;a<=n-1;a++){
        for(d=1;d<=a;d++){
            printf(" ");
        }
        for(e=1;e<=n-(i*2)+1;e++){
            printf("*");
        }
        printf("\n");
    }
}