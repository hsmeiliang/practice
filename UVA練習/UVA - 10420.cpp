#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp( const void* a, const void* b )
{
	char *p = (char *)a;
	char *q = (char *)b;
	return strcmp( p, q );
}

int main()
{
    int n = 0;
    while(scanf("%d", &n)!=EOF)
    {
        getchar();
        char s[2000][80] = {};
        char name[80] = {};
        for(int i = 0; i<n; i++)
        {
            scanf("%s", s[i]);
            gets(name);
        }
        qsort( s, n, sizeof( char )*80, cmp );
        for(int i = 0; ;)
        {
            printf("%s ", s[i]);
            int c = 0;
            int j = 0;
            for(j = i; j<n; j++)
                if(strcmp(s[i], s[j]) == 0)
                    c++;
            printf("%d\n", c);
            if(i+c == n) break;
            i += c;
        }

    }

}
