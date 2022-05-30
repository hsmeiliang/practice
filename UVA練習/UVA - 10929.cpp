#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000] = {};
    while(scanf("%s", s))
    {
        if(strcmp(s, "0") == 0) return 0;
        int odd = 0, even = 0;
        for(int i = 0; s[i]; i++)
        {
            if(i%2) odd += (s[i]-'0');
            else even += (s[i]-'0');
        }
        if(((odd - even)%11 == 0)) printf("%s is a multiple of 11.\n", s);
        else printf("%s is not a multiple of 11.\n", s);
    }
}
