#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a, b;
    printf("####################\n");
    printf("a와 b의 합을 구하는 코드입니다.\n");

    printf("a값을 입력하세요 : ");

    scanf("%d", &a);

    printf("b값을 입력하세요 : ");

    scanf("%d", &b);

    printf("결과 값은 : %d 입니다!\n", a + b);

    system("pause");

    return 0;
}