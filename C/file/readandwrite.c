#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE *fpointer = fopen("employees.txt", "w");
    fprintf(fpointer, "jim, sale\ngavin,boss\nbrian,dev");
    fclose(fpointer);
    char data[255];
    FILE *freader = fopen("salary.txt", "r");
    fgets(data,255,freader);
    printf("%s",data);
    fclose(freader);
    return 0;
}
