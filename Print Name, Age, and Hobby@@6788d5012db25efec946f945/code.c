#include <stdio.h>
#include <string.h>
int main(){
    char name[100], Hbby[100];
    int age;
    scanf("%s", &name);
    scanf("%d", &age);
    scanf("%s", &Hbby);
    printf("Name: \n",name);
    printf("Age: \n",age);
    printf("Hobby: ", Hbby);
}