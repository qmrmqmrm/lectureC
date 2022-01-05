
// 초기화 리스트
#include <iostream>

using namespace std;

class Point
{
    int x, y;
    const int c;
    int &ra;
public:
    /*
    Point(int a, int b)
    {
        x = a;
        y = b;
        
    */

    // 초기화 리스트 : 멤버 데이터의 값을 초기화하는 문법입니다.
    // 선언부의 순서와 동일하게 작성하는 것이 좋다.
    Point(int a, int b) : x(a), y(b), c(42), ra(a){}
};

class Rect
{
    Point p1;

public:
    // 기본 생성자가 제공되지 않는 맴버 데이터에 대한 초기화가 필요합니다.
    Rect()  : p1(10, 20) {}
};


int main()
{

    const int c=10; //상수는 반드시 초기화가 되어야 합니다.




    int a = 10;
    // 참조
    int &r =a;
    int b;
    b =10;
}