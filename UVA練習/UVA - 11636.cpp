#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 1, tot = 0, time = 0;
    for(int i = 1; ; i++)
    {
        scanf("%d", &tot);
        if(tot < 0) return 0;
        time = 0;
        n = 1;
        while(n < tot)
        {
            n = n*2;
            time++;
        }
        printf("Case %d: %d\n", i, time);
    }


}
