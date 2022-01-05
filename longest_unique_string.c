#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int maxLength(char **arr, int arrSize)
{

    int check = 0 , check_comp = 0 ;;
    int compatible[225][2];
    int in_comp[225][2];
    int count_in = 0 ;
    int count_comp = 0;
    int length , lmax ;
    char bfr[27];
    char final[420];
    for (size_t i = 0; i < arrSize; i++)
    {
        printf("%s\n", arr[i]);
    }

    for (size_t i = 0; i < arrSize; i++)
    {
        for (size_t j = 0; j < arrSize; j++)
        {
            if (i == j)
            {
                continue;
            }

            for (size_t k = 0; k < strlen(arr[i]); k++)
            {

                for (size_t l = 0; l < strlen(arr[j]); l++)
                {
                    if (arr[i][k] == arr[j][l])
                    {   in_comp[count_in][0] = i;
                        in_comp[count_in][1] = j;
                        count_in ++ ;
                        check = 1;
                        break;
                    }
                }
                if (check == 1)
                {
                    break;
                }
            }
            if (check == 0)
            {
                compatible[count_comp][0] = i;
                compatible[count_comp][1] = j;
                count_comp++;
            }

            check = 0;
        }
    }

    for (size_t i = 0; i < count_comp; i++)
    {
        printf("Comp[%d] = %d | %d\n", i, compatible[i][0], compatible[i][1]);
    }





for (size_t i = 0; i < arrSize; i++)
{
    for (size_t j= 0; j < arrSize; j++)
    {
        if (i == j)
        {
            continue ;
        }
        
        for (size_t k = 0; k < count_comp ; k++)
        {
            if (compatible[k][0] == i && compatible[k][1] == j)
            {
                check_comp = 1;
            }
            
        }
        
        if (check_comp == 1)
        {
                strcpy(bfr , arr[i]);
                strcat(bfr , arr[j]);
                strcpy()
                length = strlen(final);
                if(lmax < length){
                    lmax = length ;
                }
        }
    // else if (compatible[i][1] == compatible[j][0]){        
        // }    
    }
    
}


// for (size_t i = 0; i < count_comp; i++)
// {
//     length = strlen(arr[compatible[i][0]]) + strlen(arr[compatible[i][1]]) ;

// }



    return 0;
}

int main()
{

    char **arr;
    arr = (char **)malloc(5 * sizeof(char *));
    arr[0] = "new";
    arr[1] = "char";
    arr[2] = "act";
    arr[3] = "ers";
    arr[4] = "time";
    maxLength(arr, 5);



    return 0;
}