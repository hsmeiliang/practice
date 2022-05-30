#include <stdio.h>
#include <stdint.h>

int main()
{
    int64_t num1 = 0, num2 = 0;
    scanf("%lld %lld", &num1, &num2);
    while(num1!=0||num2!=0)
    {
        int carry = 0, mod = 10;
        while(1)
        {
            if(mod > num1 && mod>num2)
                break;
            if(num1%mod + num2%mod >= mod)
                carry++;
            mod*=10;
        }
        if(num1%mod + num2%mod >= mod)
                carry++;
        if(carry == 0)
            printf("No carry operation.\n");
        else if(carry == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", carry);
        scanf("%lld %lld", &num1, &num2);
    }
    return 0;
}
