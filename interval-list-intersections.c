#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int **intervalIntersection(int **firstList, int firstListSize, int *firstListColSize, int **secondList, int secondListSize, int *secondListColSize, int *returnSize, int **returnColumnSizes)
{

    int count_first = 0, count_second = 0, count_res = 0 ;

    int size = firstListSize < secondListSize ? secondListSize : firstListSize ;
    
    int **res = (int **) malloc((size * 2) * sizeof(int *));

    *returnColumnSizes = (int *)malloc((size * 2) * sizeof(int));

    for (size_t i = 0; i < size*2 ; i++)
    {   
        res[i] = (int *) malloc(2 * sizeof(int)); 
        (*returnColumnSizes)[i] = 2;
    }


    while (count_first < firstListSize && count_second < secondListSize)
    {
       int f_0 = firstList[count_first][0] , f_1 = firstList[count_first][1];
       int s_0 = secondList[count_second][0] , s_1 = secondList[count_second][1];

         if (f_0 > s_1)
        {
            count_second++; 
            continue;
        }
        if (f_1 < s_0)
        {
            count_first++;
            continue;
        }
        res[count_res][0] = f_0 < s_0 ?  s_0 : f_0;
        res[count_res++][1] = f_1 > s_1 ?  secondList[count_second++][1] : firstList[count_first++][1];
       
    }
    
    *returnSize = count_res;
    return res ;
}
int main()
{

    return 0;
}