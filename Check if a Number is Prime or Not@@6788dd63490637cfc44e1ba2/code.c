#include <stdio.h>
int main() {
    int a;
    int prime=0;
    scanf("%d", &a);
    for (int i=2; i<a; i++){
    if(a%i==0){
    prime=1;
    break;
    }
    }
    if(prime){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}