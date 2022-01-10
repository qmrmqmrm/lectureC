#include <iostream>
using namespace std;

class Base{
    public:
    void foo() {cout << "foo" << endl;}
    protected:
    void goo() {cout << "goo" << endl;}
    private:
    void hoo() {cout << "hoo" << endl;}
};

class Derived : public Base{

};

// 부모의 접근 지정자를 자식 클래스 통해 접근할 때 변경하는 방법
// : public Base
   
    // public:
    // void foo() {cout << "foo" << endl;}
    // protected:
    // void goo() {cout << "goo" << endl;}
    // private:
    // void hoo() {cout << "hoo" << endl;}

