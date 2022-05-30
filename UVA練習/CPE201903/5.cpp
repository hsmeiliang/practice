
#include <stdio.h>

int main()
{
    int x= 0,  y = 0, xy[100000000][100000000] ={};
    char xarr[100000000] = {},yarr[100000000] = {};
    scanf("%d %s", x, xarr);
    scanf("%d %s", y, yarr);
    int delet = 2, change = 2, insertx = 1;
    int cost = 0;
    for(int i= 0; i<x; i++)
    {
        for(int j = 0; j<y; j++)
        {
            if(xarr[i] == yarr[j])
                xy[i][j]=xy[i-1][j-1];
            else
            {
                xy[i][j]=xy[i-1][j] + insertx;
                if(xy[i][j-1] + delet < xy[i][j])
                    xy[i][j]=xy[i][j-1] + delet;
                if(xy[i-1][j-1] + change < xy[i][j])
                    xy[i][j]=xy[i-1][j-1] + change;
            }
        }
    }
    printf("%d\n", xy[x][y]);
}
