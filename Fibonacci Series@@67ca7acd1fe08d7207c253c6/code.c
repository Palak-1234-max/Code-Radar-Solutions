void fibonacciSeries(int n){
    int a[n];
    while(n>0){
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