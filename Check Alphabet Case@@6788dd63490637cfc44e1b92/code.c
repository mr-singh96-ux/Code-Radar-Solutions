#include <stdio.h>
#include <ctype.h>

int main(){
    char str[10];
    scanf("%c", &str);
    if(str==toupper(str)){
        printf("Uppercase");
    }
    else if(str==tolower(str)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}