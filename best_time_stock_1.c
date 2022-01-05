#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int maxProfit(int *prices, int pricesSize)
{

    int max = 0;
    int min = prices[0];
    int profit = 0;
    int max_profit = 0;

    for (size_t i = 1; i < pricesSize; i++)
    {
        if (prices[i] < min)
        {
            min = prices[i];
            max = min;
        }

        else if (prices[i] > max)
        {

            max = prices[i];
            profit = max - min;
            if (profit > max_profit)
            {
                max_profit = profit;
            }
        }
    }
    return max_profit;
}
int main()
{

    return 0;
}