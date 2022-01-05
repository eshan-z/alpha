#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was not present
    return -1;
}

int **threeSum(int *nums, int numsSize, int *returnSize, int **returnColumnSizes)
{

    int count = 0;
    int **res = (int **)malloc(numsSize * sizeof(int *));

    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 0; i < numsSize - 2; i++)
    {
        if (nums[i] == nums[i + 1])
            continue;
        for (int j = i + 1; j < numsSize - 1; j++)
        {
            if (nums[j] == nums[j + 1])
                continue;

            int target = (-1) * (nums[i] + nums[j]);

            int k = binarySearch(nums, j + 1, numsSize - 1, target);
            if (k == target)
            {
                res[count] = (int *)malloc(3 * sizeof(int));
                res[count][0] = nums[i];
                res[count][1] = nums[j];
                res[count][2] = k;
                printf("Array = %d , %d , %d", nusm[i], nums[j], k);
                count++;
            }
        }
    }

    *returnColumnSizes = (int *)malloc(count * sizeof(int));
    for (size_t i = 0; i < count; i++)
    {
        (*returnColumnSizes)[i] = 3;
    }

    *returnSize = count;
    return res;
}

int main()
{
   

    return 0;
}