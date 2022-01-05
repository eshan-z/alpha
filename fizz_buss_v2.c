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
        int length = snprintf(NULL, 0, "%d", i + 1);
        snprintf(res[i], length + 1, "%d", i + 1);
    }

    for (size_t i = 3; i <= n; i += 3)
        res[i] = "Fizz";

    for (size_t i = 5; i <= n; i += 5)
        res[i] = "Buzz";

    for (size_t i = 15; i < n; i += 15)
        res[i] = "FizzBuzz";

    *returnSize = n;
    return res;
}

int main()
{

    return 0;
}