#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int maxSubArray(int *nums, int numsSize)
{
    int sum, max = 0;
    for (size_t i = 0; i < numsSize; i++)
    {
        sum = 0;
        for (size_t j = i; j < numsSize; j++)
        {
            sum += nums[j];
            if (sum > max)
            {
                max == sum;
            }
        }
    }
    return sum ; 
}

int main()
{

    return 0;
}