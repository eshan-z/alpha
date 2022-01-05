#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPerfectSquare(int num)
{
    int i;
    for (i = 0; i * i < num; i++)
    {
    }

    if (i * i == num)
    {
        return 1;
    }

    return 0;
}

int main()
{

    int res = isPerfectSquare(121);
    printf("Res %d", res);

    return 0;
}