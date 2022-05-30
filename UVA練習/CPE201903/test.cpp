#include <stdio.h>


int main()
{
    int inputA = 0, inputB = 0, temp = 0;
    scanf("%d %d", &inputA, &inputB);
    while(inputA!=0 || inputB!=0)
    {
        int A[10001] = {}, B[10001] = {};
        int numA = 0, numB = 0, numC = 0;
        for(int i = 0; i<inputA; i++)
        {
            scanf("%d", &temp);
            if(A[temp] == 0)
            {
                A[temp] = 1;
            }
        }
        for(int i = 0; i<inputB; i++)
        {
            scanf("%d", &temp);
            if(B[temp] == 0)
            {
                B[temp] = 1;
            }
        }
        for(int i = 0; i<=10001; i++)
        {
            if(A[i] && !B[i]) numA++;
            if(B[i] && !A[i]) numB++;
        }
        int minN = numA;
        if(numB < minN)
            minN = numB;
        printf("%d\n", minN);
        scanf("%d %d", &inputA, &inputB);
    }
    return 0;
}
