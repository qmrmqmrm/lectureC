#include <iostream>

using namespace std;


class Aniaml
{
    int age;
    
public:
    virtual ~ Aniaml(){}
    virtual void Cry() {cout <<"Aniaml Cry" <<endl;}
};


class Dog : public Aniaml{
    int color;

public:
    void Cry() override {cout <<"Dog Cry" <<endl;}
};

// 1.클래스가 가상 함수르 1개라도 수유하고 있다면,
//   객체 크기가 8바이트(포인터 크기)가 증가합니다.
//   > 객체 내부에 가상 함수 테이블을 가르키는 포인터가 추가됩니다.
//   
int main()
{
    Aniaml a;
    cout << sizeof(a) << endl; // 4 -> 16

    Dog d;
    cout << sizeof(d) << endl; // 8 - > 16
}
