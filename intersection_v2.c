#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int *intersect(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize)
{
    int *a ;
    int less;
    if (nums1Size < nums2Size)
    {
        less = nums1Size;
    }
    else
    {
        less = nums2Size;
    }
    a = (int *)malloc(nums1Size * sizeof(int));
    int count_n1 = 0, count_n2 = 0, count_res = 0;

    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);

    while (count_n1 < nums1Size & count_n2 < nums2Size)
    {
       if(nums1[count_n1] == nums2[count_n2]) {
            a[count_res] = nums1[count_n1];
            count_n1 ++ ;
            count_n2 ++ ;
            count_res ++ ;
       }  

       else if (nums1[count_n1] < nums2[count_n2])
       {
           count_n1 ++ ;
       }

       else{
           count_n2 ++ ;
       }
    }

    *returnSize = count_res;

    return a;
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
