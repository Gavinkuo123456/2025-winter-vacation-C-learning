#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long func1(int power);

int main()
{
    int rounds = 10;
    printf("enter rounds: ");
    scanf("%i", &rounds);
    int nums[rounds];
    for (int i = 0; i <= rounds - 1; i++)
    {
        nums[i] = func1(i);
    }
    for (int i = 0; i <= rounds - 1; i++)
    {
        printf("%i\n", nums[i]);
    }
    return 0;
}
long func1(int power)
{
    return power * power;
}