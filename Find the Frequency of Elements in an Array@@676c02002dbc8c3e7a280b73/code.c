#include <stdio.h>
int main(){
    int n,i,freq=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
    }
    printf("%d %d\n",arr[i],freq);
}