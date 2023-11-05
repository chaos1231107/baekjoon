#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,x;
    scanf("%d %d", &n, &x);
    int *arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (*(arr+j) < x)
        {
            printf("%d ", *(arr+j));
        }
    }
    free(arr);
    return 0;
}
