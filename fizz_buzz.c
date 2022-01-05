#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char **fizzBuzz(int n, int *returnSize)
{

    char **res = (char **)malloc(n * sizeof(char *));
    for (size_t i = 0; i < n; i++)
    {
        *(res + i) = malloc(9 * sizeof(char));
    }

    for (size_t i = 0; i < n; i++)
    {

        if ((i + 1) % 3 == 0)
        {
            if ((i + 1) % 5 == 0)
                res[i] = "FizzBuzz";
            else
                res[i] = "Fizz";
        }

        else if ((i + 1) % 5 == 0)
            res[i] = "Buzz";

        else
        {
            int length = snprintf(NULL, 0, "%d", i + 1);
            snprintf(res[i], length + 1, "%d", i + 1);
        }
    }
    *returnSize = n;
    return res;
}

int main()
{

    return 0;
}