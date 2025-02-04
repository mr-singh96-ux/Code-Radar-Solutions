#include <stdio.h>

int main(){
    int i,n, result;
    scanf("%d", &n);
    for(i=1; i<=10){
        result=n*i;
        i++;
        printf("%d x %d = %d\n",n,i,result);}
    return 0;
}