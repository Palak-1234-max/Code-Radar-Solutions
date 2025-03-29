char insertionSort(char a[], int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(a[j]<a[j-1]){
            char temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    return a[n];
}
char printArray(char a[], int n){
    for(int i=0;i<n;i++){
        printf("%c ",a[i]);
    }
}