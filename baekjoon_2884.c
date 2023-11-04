#include <stdio.h>

int main(void)
{
    int hour, min;
    scanf("%d %d", &hour, &min);
    
    min -= 45;
    
    if (min < 0)
    {
        min += 60;
        hour --;
    }
    
    if (hour < 0)
    {
        hour = 23;
    }
    
    printf("%d %d", hour, min);
    
    return 0;
}
