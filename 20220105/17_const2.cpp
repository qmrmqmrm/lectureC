#include <iostream>
using namespace std;
// 주의 사항

class Test
{
private:
    int x;
public:
// 1. 모든 멤버 데이터를 상수 취급합니다.
    Test(){}
    const int *getAddress() const
    {
        //x 의 타입은 const int 타입으로 취급되 const int 로 반환해야한다.
        return &x;
    }

    // 2. const 함수는 오버로딩이 가능합니다.
    void foo()
    {
        cout << "foo" << endl;
    }

    void foo() const
    {
        cout << "const foo"<< endl;
    }
    void goo() const;

};
// 선언과 정의를 분리할 때, 모두 const가 명시되어야 합니다.
void Test::goo() const{}



int main()
{
    Test t1;
    const Test t2;
    t1.foo();
    t2.foo();
}