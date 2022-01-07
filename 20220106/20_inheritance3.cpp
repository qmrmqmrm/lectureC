#include <iostream>
#include <string>
using namespace std;

class Base
{
private:
    /* data */
public:
    Base(){cout << "Base()" << endl;}
    Base(int a ){cout << "Base(int)" << endl;}
    ~Base(){cout << "~Base()" << endl;}
};



class Derived : public Base
{
private:
    /* data */
public:
    // 원리 : 컴파일러는 자식 클래스의 생성자에서 초기화 리스트를 통해 부모 기
    Derived(){cout << "Derived()" << endl;}
    Derived(): Base(42){cout << "Derived()" << endl;}
    ~Derived(){cout << "~Derived()" << endl;}
};

int main()
{
    Derived d;
}