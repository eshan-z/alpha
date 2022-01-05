#include <stdio.h>

int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int countmax = 0;
    int count = 0;
    for (size_t i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }

        else
        {

            if (count > countmax)
            {
                countmax = count;
            }

            count = 0;
        }
    }
    
    if (count > countmax)
    {
        countmax = count;
    }
    return countmax;
}

int main()
{

    return 0;
}