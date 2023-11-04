#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int year;
    bool flag = 1;
    
    scanf("%d", &year);
    
    if((year % 4 == 0) && (year % 100 != 0)) printf("%d", flag);
    
    else if (year % 400 == 0) printf("%d", flag);
    
    else printf("%d", !flag);
}