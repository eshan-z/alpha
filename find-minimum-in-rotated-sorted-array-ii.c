#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int findMin(int* nums, int numsSize){
 
    int mid = numsSize / 2 , end = numsSize - 1 ,  i = 0 ;

   if (numsSize > 1 && nums[0] > nums[1])
   {
       return nums[1] ;
   }
   

    while (i < numsSize+2)
    {
         if (nums[mid] <= nums[0])
        {
            for (size_t i = mid; i > 1; i--)
            {
                if (nums[i] < nums[i - 1])
                {
                    return nums[i];
                }
            }
             
             mid = (mid + end + 1) / 2;
        }
        else if (mid == end)
        {
            return nums[0] ;
        }
        else
        {
            mid = (mid + end + 1) / 2;
        }

       i++ ;
        
    }
    
    return nums[0] ;
}
int main(){


return 0 ;  
}  