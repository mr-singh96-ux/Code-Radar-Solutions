#include <stdio.h>
#include <stdbool.h>

int main(){
    int a,result;
    scanf("%d", &a);
    result=a~a;
    printf("%d", result);
}