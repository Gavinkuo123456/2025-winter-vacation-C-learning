#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name[20] = "";
    int age;
    printf("enter name: ");
    fgets(Name,20,stdin);
    printf("enter age: ");
    scanf("%i", &age);

    printf("hello,%s,nice to see you\n", Name);
    printf("you are %d\n", age);
    return 0;
}