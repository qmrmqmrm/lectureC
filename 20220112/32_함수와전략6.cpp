#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){ return a > b;}

struct  Less{
    inline bool operator()(int a, int b) const {return a>b;}
};

struct Greater{
    inline bool operator()(int a, int b) const {return a<b;}
};

template <typename T>
void foo(T calc)
{
    int result = calc(10, 20);
}
int main()
{
    int x[] = {1,3,5,7,9,2,4,6,8,10};
    sort(x, x + 10, &cmp);
    Less less;
    sort(x, x + 10, less);

    // 함수 객체를 쉽게 만드는 문법
    // =>람다(Lambda):코드 블럭을 참조하는 기술
    //   : c++ 문법으로 지원합니다.
    // c++에서는 익명의 함수객체를 생성하는 기술
    // => 람다는 클로저(Clojure)를 지원합니다.


    sort(x, x + 10 , [](int a, int b) -> bool {return a<b;});

    for (auto e: x)
    {
        cout << e << endl;
    }

    int n = 100;
    // n은 람다 표혐식에서 전달하는 것이 가능합니다.
    // => 캡쳐
    //  [n] : capture by value
    //  [&n]] : capture by reference
    // > 클로저 : 다른 컨텍스트의 변수의 참조가 가능하다.
    foo([n](int a, int b){return a + b + n;});

}
