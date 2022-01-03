#include <iostream>

using namespace std;

// 1) Default parameter
// : 함수에 전달되는 인자 없는 경우, 기본값을 사용합니다.
// > 기본값을 지정할 때 뒤에서 부터 지정해야한다.
// void foo(int a, int b, int c=20, int d=10)

// 함수를 선언과 구현으로 분리항ㄹ 때는 선언부에만 기본값을 표기해야합니다.
// foo.h
void foo(int a, int b, int c=20, int d=10);

int main()
{
    foo(10,20,30,40);
    foo(10,20);
}

// 선언부와 구현부에 모두 디폴트값을 표기하면, 컴파일 오류가 발생합니다.
// void foo(int a, int b, int c=20, int d=10);
// foo.cpp
void foo(int a, int b, int c/*=10*/, int d/*=30*/)
{
    cout << a << ", "<< b <<", "
    << c << ", " << d <<endl;
}
