#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
bool containsDuplicate(int* nums, int numsSize){
    
    qsort(nums , numsSize , sizeof(int) , cmp) ;
     int count = 0;

    for (size_t i = 0; i < numsSize - 1 ; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return 1 ;
        }
    }
  
  return 0 ; 
}
int main()
{


    return 0;
}