char bubbleSort(char a[],int n){
    for(int i=0;i<n-1;i++){
        int flag=1;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
        }
        if(flag==1){
            break;
        }
        return a[n];
    }
char printArray(char a[], int n){
    for(int i=0;i<n;i++){
        printf("%c ",a[i]);
    }
}