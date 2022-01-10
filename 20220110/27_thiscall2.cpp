#include <iostream>
using namespace  std;

class Sample{
    int data;
    public:
    void f1() 
    {
        cout << "f1" << endl;
    }

    int f2()
    {
        cout << "f2"<<endl;
        return 0;
    }
    // C++ idioms
    // - c++에서 자주 사용되는 코드 기법

    int call_f3() // int call_f3(Sample* const)
    {
        //this에 대해서 null 체크를 수행하는 것은
        // 표준에서 권장하지 않습니다.
        // => 정적 멤버 함수를 통해 동일한 코드를 작성해 주어야 합니다.
        if(this)
        {
            return f3(); // this->f3()

        }
        return 0;
    }

    static int call_f3(Sample* const self)
    {
        if(self)
        {
            return self->f3();
        }
        return 0;
    }

    protected:
    int f3()
    {
        cout << "f3"<< endl;
        return data; // return this->data
    }
};

int main()
{
    Sample* p =nullptr;
    p->f1();
    p->f2();
    p->call_f3(); // Sample::call_f3(p)
    Sample::call_f3(p);
}