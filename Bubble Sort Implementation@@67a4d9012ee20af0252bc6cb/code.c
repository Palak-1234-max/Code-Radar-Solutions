// Your code here...
int bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int flag = 1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
        if(flag==1) break;
    }
    return arr[n];
}
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}