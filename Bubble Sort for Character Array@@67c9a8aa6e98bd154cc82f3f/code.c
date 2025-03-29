char bubbleSort(char a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                char temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return a[n];
}
char printArray(char a[], int n){
    for(int i=0;i<n;i++){
        printf("%c ",a[i]);
    }
}