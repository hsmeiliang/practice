#include <stdio.h>
#include <stdlib.h>

int cal(int L, int U, =int k)
{
    int c = 0;
    for(int i = 1; i <= U; i++)
    {
        if(k%i == 0) c++;
    }
    return c;
}

int main()
{
    int n = 0;
    int arr[1024][2] = {};
    while(scanf("%d", &n) != EOF)
    {
        for(int i = 0; i<n; i++)
        {
            scanf("%d %d", &arr[i][0], &arr[i][1]);
        }
        for(int i = 0; i < n ; i++)
        {
            int p = 0, d = 0;
            for(int k = arr[i][0]; k <= arr[i][1] ; k++)
            {
                int temp = 0;
                for(int j = 1; j<=arr[i][1]; j++)
                {
                    if(k%j == 0) temp++;
                }
                if(temp > d)
                {
                    p = k;
                    d = temp;
                }
            }

            printf("Between %d and %d, %d has a maximum of %d divisors.\n", arr[i][0], arr[i][1], p, d);
        }
    }
    return 0;
}
