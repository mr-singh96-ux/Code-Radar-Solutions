#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for (int i>0; i<a; i++){
    if(a%i==0){
    prime=1;}
    }
    if(prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}