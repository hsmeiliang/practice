#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int d[500] = {};
    for(int c = 1; c <= n; c++)
    {
        int r = 0;
        int arr[500] = {};
        scanf("%d", &r);
        for(int i = 0; i<r; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i<r; i++)
        {
            for(int j = i; j<r; j++)
            {
                if(arr[i] < arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        int t = arr[(r/2)];
        int x = 0;
        for(int i = 0; i < r; i++)
            x += abs(t - arr[i]);
        d[c] = x;
    }
    for(int c = 1; c <= n; c++)
        printf("%d\n", d[c]);
    return 0;
}
