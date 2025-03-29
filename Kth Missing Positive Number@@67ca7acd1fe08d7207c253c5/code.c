int findKthMissing(int a[], int n, int k){
    missing_count=0; current=1; index=0;
    while(1){
        if(index<n && a[index]==current){
            index++;
        }
        else{
            missing_count++;
            if(missing_count==k){
                return current;
            }
        }
        current++;
    }
}