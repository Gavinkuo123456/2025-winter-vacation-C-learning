#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int num = 10;
    int *pnum = &num;

    printf("%p\n", pnum);
    printf("%d\n",*pnum);
    return 0;
}
