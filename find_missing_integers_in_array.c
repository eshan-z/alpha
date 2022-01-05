#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){

    
    int arr[numsSize], count = 0 ;
    int *res = malloc(numsSize * sizeof(int)) ;
    for (size_t i = 0; i < numsSize; i++)
    {
        arr[i] = 0 ;
    }
    
    
    for(size_t  i= 0 ; i < numsSize ; i++)
    {
        arr[nums[i]-1] = 1 ;
    }
    
    
    for(size_t i = 0 ; i < numsSize ; i++) if(arr[i] == 0) res[count++] = i ;
    
    *returnSize = count ; 
    
    return res; 
    
}
int main(){


return 0 ;  
}  