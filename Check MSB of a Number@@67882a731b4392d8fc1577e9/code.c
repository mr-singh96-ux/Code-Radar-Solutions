#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a&(1<<63)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}