#include <stdio.h>
#include <string.h>
#include <stdlib.h>
bool isAnagram(char *s, char *t)
{
    int freq[26] = {0};
    int s_f = strlen(s), t_f = strlen(t);

    for (size_t i = 0; i < s_f; i++)
        freq[s[i] - 'a']++;

    for (size_t i = 0; i < t_f; i++)
    {
        if (freq[t[i] - 'a'] == 0)
        {
            return false;
        }

        else
        {
            freq[t[i] - 'a'] -- ;
        }
    }
    return true ;
}
int main()
{

    return 0;
}