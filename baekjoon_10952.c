#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool flag = true;
    int a, b;
    int sum = 0;
    while (flag)
    {
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0)
        {
            break;
            flag != flag;
        }

        sum = a + b;
        printf("%d\n", sum);
    }

    return 0;
}
