#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int *findDuplicates(int *nums, int numsSize, int *returnSize)
{

    qsort(nums, numsSize, sizeof(int), cmp);
    int *bfr = (int *)malloc(numsSize * sizeof(int));
    int count = 0;

    for (size_t i = 0; i < numsSize; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            bfr[count] = nums[i];
            count++;
            i++ ;
        }
    }
    return bfr ;
}
int main()
{

    return 0;
}