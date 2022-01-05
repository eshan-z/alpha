#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int firstUniqChar(char *s)
{

    int check = 0;

    for (size_t i = 0; i < strlen(s); i++)
    {
        check = 0;
        for (size_t j = 0; j < strlen(s); j++)
        {
            if (i != j && s[i] == s[j])
            {
                check = 1;
                break;
            }
        }

        if (check == 0)
            return i;
    }
    return -1 ;
}
int main()
{

    return 0;
}