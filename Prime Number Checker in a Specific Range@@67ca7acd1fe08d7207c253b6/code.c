void printPrimesInRange(int a, int b){
    int count,flag=0;
    for(int i=a;i<=b;i++){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                flag=1;
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }
    if(!flag){
        printf("No prime numbers");
    }
}