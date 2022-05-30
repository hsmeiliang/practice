#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
int64_t func(int64_t n, int t)
{
    while(n > 0)
    {
        t += n%10;
        n = n/10;
    }
    if(t/10 > 0)
        t = func(t,0);
    return t;
}

int main()
{
    int64_t n = 0;
    while(scanf("%lld", &n)!=EOF && n!=0)
    {
        int t = 0;
        t = func(n,0);
        printf("%d\n", t);
    }
    return 0;
}
