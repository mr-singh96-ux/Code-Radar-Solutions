#include <stdio.h>

int main(){
    char str1[1];
    scanf("%s", &str1);
    if(isupper(str1)){
        printf("Uppercase");
    }
    else if(islower(str1)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}