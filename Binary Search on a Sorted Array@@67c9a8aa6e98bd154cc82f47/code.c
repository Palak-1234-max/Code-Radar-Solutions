int binarySearch(int a[], int n, int target){
    int i,j,flag,mid;
    while(i<=j){
        int left=0, right=n-1;
        flag=0;
        mid=(left+right)/2;
        if(target==a[mid]){
            flag=1;
            break;
        }
        else if(a[mid]<target){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    if(flag==1){
        return mid;
    }
    else{
        return -1;
    }
}