#include <iostream>

using namespace std;


//  c++ 에서는 파라미터의 타입이나 개수가 다르면,
// 동일한 이름의 함수를 여러개 만들 수 있습니다.
// "함수 오버로딩"이라고 부릅니다.
// 컴파일러가 함수의 파라미터 정보를 통해 이름을 생성합니다.
// 파라미터의 개수와 타입이 다르면 다른 이름이 생성됩니다.
// "네임 맹글링"

// c언어에서 같은 이름을 사용하려면 매크로 함수를 사용
// #define SQUARE (x)*(x)
// 치환이기 때문에 , 우선순위에 대한 주의가 필요합니다.
// > 괄호를 통해 매크로 함수의 우선 순위 문제를 해결 할 수 있습니다.
// > 자유도는 높지만 타입 안정성이 떨어진다.
// 주의사항
// - 반환 타입은 함수 이름에 영향을 미치지 않습니다.
//   파라미터가 동일하고 반환타입이 다른 함수는 오버로딩이 불가능합니다.
//   int foo() {}
//   void foo() {}


// void goo(int a) {}
// void goo(int a, int b = 100){}
// > 컴파일러는 어떤 함수를 호출하지 결정할 수 없습니다. - 컴파일 오류

int squaure(int x)
{
    return x * x;
}
double squaure(double x)
{
    return x * x;
}
char square(char c)
{
    return c *c ;
}

int main()
{

}
