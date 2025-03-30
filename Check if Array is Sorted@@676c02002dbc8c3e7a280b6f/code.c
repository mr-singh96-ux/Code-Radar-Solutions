#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    for(i=0;i<n;i++){
        arr1[i]=arr[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int sorted=0;
    for(i=n;i<n;i++){
        if(arr1[i]==arr[i]){
            sorted=1;
            break;
        }
        else{
            sorted=0;
            break;
        }
    }
    if(sorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}