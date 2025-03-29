int printPrimesInRange(int a, int b){
    for(int i=a;i<=b;i++){
        count=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }
}