// c++ 변수의 특징
#include <iostream>

using namespace std;

/*
int main()
{
    int n1 = 0xfa; // 11111010
    // c++11 부터는 2진수 표기가 가능합니다.
    // c++11 부터는 자리수 표기도 가능합니다.
    // 1,000,000
    int n2 = 0b1111'1010;

    cout << n1 << ", " << n2 <<endl;

    int n3 = 100;
    //c언어에서는 허용되지 않는경우가 많습니다.
    // c++ 에서는 어떤 위치에서든 변수를 정의할 수 있습니다.
}
*/

// 구조체(struct)
// 사용자 정의 타입을 만들때 사용합니다.
struct Point
{
    //c++11 부터는 구조체를 만들 때, 초기값 지정이 가능합니다.
    int x=10;
    int y=20;

};

int main()
{
    //구조체 변수
    struct Point p1;
    Point p2;
    // c++ 에서는 struct를 붙이지 않아도 됩니다.
    cout << p1.x<< "," << p1.y <<endl;

}

// g++ 1.cpp -std=c++11
// clang++ 1.cpp -std=++11