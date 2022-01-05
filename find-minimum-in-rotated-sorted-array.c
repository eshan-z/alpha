#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findMin(int *nums, int numsSize)
{

    int mid = numsSize / 2;
    int end = numsSize - 1;

    if (numsSize > 1 && nums[0] > nums[1])
    {
        return nums[1];
    }

    while (1)
    {
        if (nums[mid] < nums[0])
        {
            for (size_t i = mid; i > 1; i--)
            {
                if (nums[i] < nums[i - 1])
                {
                    return nums[i];
                }
            }
        }
        else if (mid == end)
        {
            return nums[0];
        }
        else
        {
            mid = (mid + end + 1) / 2;
        }
    }
}
int main()
{

    return 0;
}