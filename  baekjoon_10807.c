#include <stdio.h>

int main(void)
{
    int N, num;
    int v;
    int arr[100];
    int cnt = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        arr[i] = num;

    }
    scanf("%d", &v);

    for (int j = 0; j < N; j++)
    {
        if (arr[j] == v)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    //printf("%5d", arr);


    return 0;
}