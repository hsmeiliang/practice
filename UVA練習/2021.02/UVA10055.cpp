#include <stdio.h>


int main()
{
    long long int num1 = 0, num2 = 0;
    while(scanf("%lld %lld", &num1, &num2) == 2)
    {
        long long int t = num1-num2;
        if(t<0)
            t = num2-num1;
        printf("%lld\n", t);
    }
    return 0;
}
