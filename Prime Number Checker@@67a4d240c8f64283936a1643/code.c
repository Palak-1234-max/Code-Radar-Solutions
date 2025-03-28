// Your code here...
#include <stdio.h>
int isPrime(int a){
    int i,count=0;
    for(i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}
