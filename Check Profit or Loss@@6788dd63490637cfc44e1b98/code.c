#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>b && b>a){
        printf("Profit");
    }
    else if(a<b && b<a){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}