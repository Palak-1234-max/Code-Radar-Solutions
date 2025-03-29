int binarySearch(int a[], int n, int target){
    int left=0, right=n-1, flag, mid;
    while(left<=right){
        flag=0;
        mid=(left+right)/2;
        if(target==a[mid]){
            flag=1;
            break;
        }
        else if(a[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(flag==1){
        return mid;
    }
    else{
        return -1;
    }
}