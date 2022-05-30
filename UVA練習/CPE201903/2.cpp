#include <stdio.h>


int main()
{
    int num = 0,sum = 0, temp = 0;
    int table[100010] = {};
    scanf("%d", &num);
    for(int i = 1; i <= 100000; i++)
    {
        temp = i;
        sum = i;
        while(temp>0)
        {
            sum+=temp%10;
            temp=temp/10;
        }
        if(table[sum] == 0)
            table[sum] = i;

    }
    while(num >0)
    {
        scanf("%d", &temp);
        printf("%d\n", table[temp]);
        num--;
    }
    return 0;
}
