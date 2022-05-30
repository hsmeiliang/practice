#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arr[] = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    char s[65535] = {};
    gets(s);
    for(int i = 0; s[i]; i++)
    {
        if(s[i] == ' ')
            printf(" ");
        else
        {
            for(int k = 0; arr[k]; k++)
            {
                if(tolower(s[i]) == arr[k])
                {
                    printf("%c", arr[k-2]);
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}
