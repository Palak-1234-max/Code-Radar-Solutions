int fibonacciSeries(int n){
    while(n>0){
        int a[n];
        a[0]=0;
        a[1]=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+a[i];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}