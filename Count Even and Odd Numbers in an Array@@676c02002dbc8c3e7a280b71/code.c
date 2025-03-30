#include <stdio.h>
int main(){
    int n,i,ecount=0,ocount=0;
    scanf("%d",&n);
    int arr[n],arr1[n],arr2[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            arr1[ecount++]=arr[i];
        }
        else{
            arr2[ocount++]=arr[i];
        }
    }
    printf("%d %d",ecount,ocount);
    return 0;
}