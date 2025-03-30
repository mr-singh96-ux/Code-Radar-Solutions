#include <stdio.h>
int rev(int *arr,int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int rightRev(int *arr,int n,int k){
    k=k%n;
    if(k==0) return 1;
    rev(arr,0,n-1);
    reb(arr,0,k-1);
    rev(arr,k,n-1);
}
int main(){
    int n,i,k;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[[i]]);
    }
    scanf("%d",&k);
    rightRev(arr,n,k);
    printf("%d",arr[i]);
}