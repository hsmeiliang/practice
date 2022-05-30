#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int64_t func(int64_t n, int64_t c)
{
    if(n == 1) return 1;
    else
    {
        if(n%2) n = 3*n+1;
        else n = n/2;
        c += func(n, c++);
        return c;
    }
}

void swap(int64_t* I, int64_t* J)
{
    int64_t t = *I;
    *I = *J;
    *J = t;
}

int main()
{
    int64_t I = 0, J = 0;
    while(scanf("%lld %lld", &I, &J) == 2)
    {
        int64_t c = 0;
        int k = I, l = J;
        if(I>J)
        {
            k = J;
            l = I;
        }
        for(; k<=l; k++)
        {
            int64_t t = func(k, 0);
            if(t>c) c = t;
        }
        printf("%lld %lld %lld\n", I, J, c);
    }
    return 0;
}
