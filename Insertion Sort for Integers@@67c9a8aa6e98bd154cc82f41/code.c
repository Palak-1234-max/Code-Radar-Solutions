// Your code here...
int insertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(a[j]<a[j-1]){
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    return a[n];
}
int printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}