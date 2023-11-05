#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int *ary = (int *) malloc(n * sizeof(int));
    //int ary[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    int max = ary[0];
    int min = ary[0];

    for (int j = 0; j < n; j++)
    {
        if (ary[j] >= max)
        {
            max = ary[j];
        }

        if (ary[j] <= min)
        {
            min = ary[j];
        }
    }

    printf("%d %d", min, max);
    free(ary);
    return 0;

}