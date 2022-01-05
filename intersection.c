#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
   int *result ;
    if(nums1Size < nums2Size) {    
    
    result = (int *)malloc(nums1Size * sizeof(int));
   }
    else {
        result = (int *)malloc(nums2Size * sizeof(int));
    }
   
    int count_n1 = 0, count_n2 = 0, count_res = 0, k;
    int check_a = 0;

    for (size_t i = 0; i < nums1Size; i++)
    {
        for (size_t j = 0; j < nums1Size; j++)
        {
            if (nums1[i] == nums1[j])
            {
                count_n1++;
            }
        }

        for (size_t j = 0; j < nums2Size; j++)
        {
            if (nums1[i] == nums2[j])
            {
                check_a = 1;
                count_n2++;
            }
        }

        if (count_n1 < count_n2)
        {
            k = count_n1;
        }

        else
        {
            k = count_n2;
        }

        for (size_t lmn = 0; lmn < count_res; lmn++)
        {
            if (result[lmn] == nums1[i])
            {
                check_a = 0;
            }
        }

        for (size_t t = 0; t < k; t++)
        {
            if (check_a == 1)
            {
                result[count_res] = nums1[i];
                count_res++;
            }
        }
            check_a = 0 ;
            count_n1 = 0;
            count_n2 =0 ;
    }

    
    *returnSize = count_res ;

    return result;
}

int main()
{
    printf("Intersection of Two Interger Arrays\n");

    int nums1[1000], nums2[1000];
    int l1, l2;

    printf("Input Array 1's Length\n");
    scanf("%d", &l1);
    printf("Input Array 2's Length\n");
    scanf("%d", &l2);
    printf("Input Array 1\n");

    for (size_t i = 0; i < l1; i++)
    {
        scanf("%d", (nums1 + i));
    }
    printf("Input Array 2\n");
    for (size_t i = 0; i < l2; i++)
    {
        scanf("%d", &nums2[i]);
    }

    for (size_t i = 0; i < l1; i++)
    {
        printf("nums1[%d] = %d\n", i, nums1[i]);
    }

    for (size_t i = 0; i < l2; i++)
    {
        printf("nums2[%d] = %d\n", i, nums2[i]);
    }

    int *result;
    int *p;
    result = intersect(nums1, l1, nums2, l2, p);

    for (size_t i = 0; i < *p; i++)
    {
        printf("Result[%d] = %d\n", i, *(result + i));
    }

    return 0;
}