int findUnsortedSubarray(int a[], int n){
    int left=-1, right=-1;
    // find the left boundary
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            left=i;
        }
    }
    // if array is already sorted
    if(left==-1){
        return;
    }
    // find the right boundary
    for(int i=n-1;i>0;i--){
        if(a[i-1]>a[i]){
            right=i;
        }
    }
    //find max and min within the subarray
    int max=a[left], min=a[left];
    for(int i=left;i<=right;i++){
        if(a[i]>max) max=a[i];
        else if(a[i]<min) min=a[i];
    }
    // expand left boundary
    for(int i=0;i<left;i++){
        if(a[i]<min){
            left=i;
            break;
        }
    }
    // expand right boundary
    for(int i=n-1;i>right;i--){
        if(a[i]>max){
            right=i;
            break;
        }
    }
    return right-left;
}