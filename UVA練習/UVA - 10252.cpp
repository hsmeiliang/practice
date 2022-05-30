#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void sortch(char s[])
{
    char cp[1000] = {};
    strcpy(cp, s);
    int n = 0;
    for(char c = 'a'; c <= 'z'; c++)
    {
        for(int i = 0; cp[i]; i++)
        {
            if(cp[i] == c)
            {
                s[n]=c;
                n++;
            }
        }
    }
}

int func(char s1[], int x, char s2[], int y, int t, )
{
    for(int j = 0; s2[j]; j++)
    if(s2[j] == s1[x] && j!=y)
    {
        t += func(s1, x+1, s2, j, t++);
        break;
    }
    return t;
}

int main()
{
    char s1[1000] = {}, s2[1000] = {};
    while(gets(s1))
    {
        gets(s2);
        sortch(s1);
        sortch(s2);

        int c = 0, t = 0, s = 0;
        char str[1000] = {};
        for(int i = 0; s1[i]; i++)
        {
            t = func(s1, i, s2, -1, 0, str);
            if(t>c)
            {
                c = t;
                s = i;
            }
        }
        for(int i = s; i <= s+t; i++)
            printf("%c", s1[i]);

        printf("\n");
    }
}
