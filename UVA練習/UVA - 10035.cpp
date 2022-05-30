#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int64_t n, m;
    while(scanf("%lld %lld", &n, &m))
    {
        if(n == 0&&m == 0)return 0;
        int c = 0;
        int64_t p = 10;
        while(1)
        {
            if(p>n && p>m) break;
            if(((n%p) + (m%p)) >= p) c++;
            p = p*10;
        }
        if(((n%p) + (m%p)) >= p) c++;
        if(c==0)printf("No carry operation.\n");
        else if(c==1)printf("1 carry operation.\n");
        else printf("%d carry operations.\n", c);
    }
    return 0;
}
