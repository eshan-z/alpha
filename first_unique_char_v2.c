#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int firstUniqChar(char *s)
{
    int freq[26] = {0};
    int count = 0,  check = 0 ;

   for (size_t i = 0; i < strlen(s); i++)
   {
       freq[s[i] - 'a']++ ;
   }

   for (size_t i = 0; i < strlen(s); i++)
   {
       if (freq[s[i] - 'a'] == 1)
       {
           return i ; 
       }
       
   }

    return -1 ;
}
int main()
{

    return 0;
}