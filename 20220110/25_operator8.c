// ++ 연산자는 c/c++의 동작이 다릅니다.

#include <stdio.h>

int main()
{
    int n = 0;
    ++ n; // c에서는 값이 반한합니다.
    // 값이 다시 증 가할 수 없습니다.
    printf("%d\n",n);
}