#include <iostream>
using namespace std; 

// 예외를 던질 때, 예외 전용클래스를 만들어서  사용합니다.

class MemoryException: public std::exception
{
    public:
    char const* what() const noexcept override
    {
        return "메모리 할당 오류";
    }
};

void foo(int a)
{
    if( a< 0)
    {
        throw MemoryException();
    }
}

int main()
{
    try{
        foo(-100);

    }
    catch(const MemoryException& e)
    {
        cout << e.what() << endl;
    }
}