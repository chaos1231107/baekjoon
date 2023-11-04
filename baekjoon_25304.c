#include <stdio.h>

int main(void)
{
    int X;
    int N;
    int a, b;
    int total = 0;
    
    scanf("%d", &X);
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &a, &b); //개행문자 입력시 입력 버퍼 생성 --> 입력이 안끝남
        total += a * b;
       
    }
    
    if (total == X) printf("Yes");
    else printf("No");
    
    return 0;
  
}