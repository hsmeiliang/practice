#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int num = 0, low = 1, high = 10;
    string res;
    scanf("%d", &num);
    while(num != 0)
    {
        low = 1, high = 10;
        while(getline(cin, res))
        {
            if(res != "right on")
            {
                if(res == "too high")
                {
                    if(num-1<high)
                        high = num-1;
                }
                if(res == "too low")
                {
                    if(num+1>low)
                        low = num+1;
                }
                scanf("%d", &num);
            }
            else
                break;
        }
        if(num >= low && num <= high)
            printf("Stan may be honest\n");
        else
            printf("Stan is dishonest\n");
        scanf("%d", &num);
    }
    return 0;
}
