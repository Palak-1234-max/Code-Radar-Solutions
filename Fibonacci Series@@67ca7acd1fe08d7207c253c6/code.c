void fibonacciSeries(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
        n3=n1+n2;
        printf("%d ",n1);
        n1=n2;
        n2=n3;
        fibonacciSeries(n-1);
    }
}