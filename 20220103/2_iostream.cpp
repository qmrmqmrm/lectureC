// c++ 표준 입출력
// 1. c 언어에서는 표준 입출력을 위해 대표적으로 사용하는 함수
// : printf, scanf
/*
#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d", &n);

    printf("out : %d\n", n);
}
// pointer 를 이용하여 n의 주소를 보낸다.
*/
// c++에서 제공하는 표준 입출력
# include <iostream>

int main()
{
    int n = 0;
    // scanf("%d," &n);
    //1. 정수 타입을 지정할 필요가 없다.
    //2. 주소를 보내지 않아도, 값이 변경된다.
    //3. std::cout, std::cin의 정체는 무엇인가?
    //4. std::endl; 의 정체는 무엇인가?

    std::cin >> n;
    std::cout << "out : "<< n << std::endl;
    std::cout << std::endl;

}
// pointer 를 이용하여 n의 주소를 보내지 않아도 사용된다.

