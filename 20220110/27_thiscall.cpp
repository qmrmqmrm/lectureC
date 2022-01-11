#include <iostream>
using namespace std;

// 디자인 패턴(Design Pattern)
//  => 1995년 디자인 패턴
//     : 에릭감마 외 3명(Gang of Four) => Gof

class Point{
    int x, y;

    public:
    void set(int a, int b)
    {
        x = a;
        y = b;

    }

    static void foo(int a)
    {
        // x = a;
        // 정적 멤버 함수는 객체값이 호출 가능합니다.
        // > 객체의 멤버 데이터의 접근이 불가능합니다.
        // - this 가 전달 되지 않습니다.
    }
};

int amin()
{
    Point p1, p2;
    p1.set(10,20);
    p2.set(20,30); // POint::set
}




