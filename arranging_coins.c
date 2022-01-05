#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arrangeCoins(int n)
{

    // int res =  (sqrt(1 + 8 * n) - 1)/2 ;
    int sqrt = 1 + 8 * n, temp = 0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = ((1 + 8 * n) / temp + temp) / 2;
    }
    return (sqrt - 1) / 2;
}
int main()
{

    return 0;
}