// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    // Sorting the array
    for(i=0;i<n-1;i++){
        for(j=1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    // Finding the pair with smallest difference
    int min_diff=a[1]-a[0];
    int element1=a[0], element2=a[1];
    for(i=0;i<n-1;i++){
        int diff=a[i+1]-a[i];
        if(diff<min_diff){
            min_diff=diff;
            element1=a[i];
            element2=a[i+1];
        }
    }
    printf("%d %d",element1,element2);
    return 0;
}