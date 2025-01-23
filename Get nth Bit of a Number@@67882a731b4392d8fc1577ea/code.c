#include <stdio.h>

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(b&(0<<a)){
        printf(1);
    }
    else{
        printf(0);
    }
}