#include<stdio.h>
#include<stdlib.h>

int main()
{
    int s = 0, x = 0, y = 0, z = 0;
    while(scanf("%d %d %d %d", &s, &x, &y, &z))
    {
        if(s==0&&x==0&&y==0&&z==0)
            return 0;
        double degree = 0, p = 9;
        double full = 360;
        //s s
        degree = 2*full;
        if((s-x) < 0) degree = degree + full + (s-x)*p;
        else degree = degree + (s-x)*p;

        degree = degree + full;
        if((y-x) > 0) degree = degree + (y-x)*p;
        else degree = degree + full + (y-x)*p;

        if((y-z) < 0) degree = degree + full + (y-z)*p;
        else degree = degree + (y-z)*p;

        printf("%.0lf\n", degree);
    }
}
