#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lengthOfLongestSubstring(char *s)
{

    int l = strlen(s);
    int count = 0, max = 0;
    char bfr[26];
    int n = 0;
    switch (l)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
        break;
    }

    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = n; j < count; j++)
        {
            if (s[i] == bfr[j])
            {
                if (count - n > max)
                {
                    max = count - n;
                }
                // count = count - j + 1;
                n = j + 1;
                break;
            }
        }

        bfr[count] = s[i];
        count++;
    }
    if (count - n > max)
    {
        max = count - n;
    }

    return max;
}
int main()
{

    char s[] = "abcdefghbkldmnopqrstuvw";
    int res = lengthOfLongestSubstring(s);
    printf("Res = %d", res);
    return 0;


}