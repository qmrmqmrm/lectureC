// ++ 연산자는 c/c++의 동작이 다릅니다.

#include <stdio.h>

int main()
{
    int n = 0;
    ++ ++ ++ ++ ++ n;
    // c++에서는 참조가 반환 합니다.
    // 참조는 다시 증가 할 수 있습니다.
    printf("%d\n",n);
}