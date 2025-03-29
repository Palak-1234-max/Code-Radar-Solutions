// Your code here...
#include <limits.h>
int kthSmallest(int a[], int n, int k){
    for(int i=0;i<n;i++){
        int min= INT_MAX;
        int minidx=-1;
        for(j=i;j<n;j++){
            if(a[j]<min){
                min=a[j];
                minidx=j;
            }
        }
        // swap minidx and i
        int temp=a[minidx];
        a[minidx]=a[i];
        a[i]=temp;
    }
    return a[k-1];
}