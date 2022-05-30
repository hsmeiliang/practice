#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n = 0;
    while(scanf("%d", &n)!=EOF)
    {
        getchar();
        char c = 0;
        int t = 0;
        int arr[26] = {};
        while(scanf("%c", &c))
        {
            if(c == '\n')
            {
                t++;
            }
            if(t == n)
                break;
            if(isalpha(c)) arr[toupper(c) - 'A']+=1;
        }
        t = 0;
        for(int i = 0; i<26; i++)
            if(arr[i]>t) t = arr[i];

        for(int i = t; i>0; i--)
        {
            for(int j = 0; j<26; j++)
            {
                if(arr[j]==i)
                    printf("%c %d\n", 'A'+j, i);
            }
        }
    }
    return 0;
}
