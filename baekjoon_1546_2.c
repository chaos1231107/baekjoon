#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    //double result;
    scanf("%d", &N);
    int ary[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ary[i]);
    }

    int M = ary[0];
    double result = 0.0;

    for (int j = 0; j < N; j++)
    {
        if (ary[j] >= M)
        {
            M = ary[j];
        }
    }

    for (int k = 0; k < N; k++)
    {
         result += (double)ary[k] / M * 100;
    }

    printf("%.1lf\n", result/N);

    return 0;
}
