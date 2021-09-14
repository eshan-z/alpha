#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *shiftingLetters(char *s,long  *shifts, long  shiftsSize)
{    
long  total = 0 , shift_bfr=0;
    for (long  i = 0; i < shiftsSize; i++)
    {
        total += shifts[i];
    }

    for (long  j = 0; j < shiftsSize; j++)
    {   shift_bfr = total % 26 ;
        printf("Total = %d\n" ,total);
        printf("shifts = %d\n" ,shift_bfr);
        s[j] = (s[j] + shift_bfr);
        total = total - shifts[j];
        
        if(s[j] > 122 ){
            s[j] -= 26;
        }
        printf("ASCII of s[i] = %d\n" , *(s + j));
    }
    return s;
}
int main()
{
    printf("Shifting Letters\n");
   unsigned char s[5000];
    char result[5000];
long  l, shifts[5000];
    printf("Input the string\n");
    gets(s);
    l = strlen(s);
    printf("Length of the string entered = %d\n", l);
    printf("Input \"shifts\"\n");
    for (size_t i = 0; i < l; i++)
    {
        scanf("%d", &shifts[i]);
    }
    printf("-------------------------------------------------------------------------------\n");

    strcpy(result, shiftingLetters(s, shifts, l));

    puts(result);
    puts(s);

    return 0;
}