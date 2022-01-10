#include <iostream>

using namespace std;


class Point {
private:
    int x;
    int y;

public:
    Point(int a, int b)
        : x(a)
        , y(b)
    {
    }

    friend ostream& operator<<(ostream& os,const Point& p);

};

ostream& operator<<(ostream& os,const Point& p)
{
    return os << p.x << ", " <<p.y;
}
int main()
{
    Point p1(10, 20);
    cout << p1 << endl;
    // cout.operator<<(p1)
    // => cout.operator<<(const Point&)
    // => 멤버 함수는 ostream 클래긋르 수정할 수 없으므로
    //    제공이 불가능합니다.

    // operator<<(cout, p1)
    // => operator(std ::ostram& os, const Point&)

}