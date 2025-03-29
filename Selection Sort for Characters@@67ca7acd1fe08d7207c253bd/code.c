char selectionSort(char a[], int n){
    for(int i=0;i<n-1;i++){
        char min = a[i];
        int minidx=i;
        for(int j=i;j<n;j++){
            if(a[j]<min){
                min=a[j];
                minidx=j;
            }
        }
        // swapping minidx and i
        char temp=a[minidx];
        a[minidx]=a[i];
        a[i]=temp;
    }
    return a[n];
}
char printArray(char a[], int n){
    for(int i=0;i<n;i++){
        printf("%c ",a[i]);
    }
}