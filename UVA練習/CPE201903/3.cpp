#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b)
{
    return strcmp((char*)a, (char*)b);
}

char data[2000][75] = {};
char con[2000][75] = {};

int main()
{
    int num = 0,j =0, i = 0, k = 0, number =1;
    scanf("%d", &num);
    getchar();
    while(num>0)
    {
        gets(data[i]);
        num--;
        i++;
    }
    for(j = 0; j<i; j++)
    {
        k = 0;
        while(data[j][k] != ' ')
        {
            con[j][k] = data[j][k];
            k++;
        }
    }
    qsort(con, i, 75, comp);
    for(j = 0; j<i; j++)
    {
        k = j;
        number = 1;
        while(strcmp(con[k], con[k+1])==0)
        {
            k++;
            j++;
            number++;
        }
        printf("%s %d\n", con[j], number);
    }
    return 0;
}
