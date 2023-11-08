#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int *ary = (int *) malloc(N * sizeof(int));
    if (ary == NULL)
    {
        exit(1);
    }

    for (int x = 0; x < N; x++)
    {
        ary[x] = x + 1;
    }

    for (int k = 0; k < M; k++)
    {
        int i, j;
        scanf("%d %d", &i, &j);
        i--;
        j--;

        while (i < j)
        {
            int temp = ary[i];
            ary[i] = ary[j];
            ary[j] = temp;
            i++;
            j--;
        }
    }
    for (int y = 0; y < N; y++)
    {
        printf("%d ", ary[y]);
    }


    free(ary);
    return 0;
}
