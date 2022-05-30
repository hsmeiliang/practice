#include <stdio.h>
#include <stdlib.h>

int main()
{
    int times = 0;
    scanf("%d", &times);
    while(times>0)
    {
        int r = 0;
        scanf("%d", &r);
        int street[500] = {};
        int sum = 0;
        for(int i = 0; i<r; i++)
            scanf("%d", &street[i]);
        for(int i = 0; i<r; i++)
        {
            for(int j = i; j<r; j++)
            {
                if(street[i]<street[j])
                {
                    int temp = street[i];
                    street[i]=street[j];
                    street[j]=temp;
                }
            }
        }
        for(int i = 0; i<r; i++)
        {
            sum+=abs(street[r/2]-street[i]);
        }
        printf("%d\n", sum);
        times--;
    }
    return 0;
}
