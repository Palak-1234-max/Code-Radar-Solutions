void printPrimesInRange(int a, int b){
    int flag;
    for(int i=a;i<=b;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
        if(count!=2){
            flag=1;
        }
    }
    if(flag==1){
        printf("No prime numbers");
    }
}