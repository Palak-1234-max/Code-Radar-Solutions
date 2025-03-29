int findOccurrence(int a[], int n, int target, char mode){
    if(mode=='F'){
        for(int i=0;i<n;i++){
            if(a[i]==target){
                return i;
            }
        }
    }
    else if(mode == 'L'){
        for(int i=n-1;i>=0;i--){
            if(a[i]==target){
                return i;
            }
        }
    }
    return -1;
}