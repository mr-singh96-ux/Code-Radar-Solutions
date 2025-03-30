#include <stdio.h>
int main(){
    int n,i,freq=0,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        freq=1;
        if(arr[i]!=-1){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                freq++;
                arr[j]=-1;
            }
        }
        printf("%d %d\n",arr[i],freq);
    } 
    }
    return 0;
}