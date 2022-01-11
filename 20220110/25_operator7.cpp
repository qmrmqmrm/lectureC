#include <iostream>
using namespace std;

// c/c++에서 가장 많이 사용하는 연산자 중에 하나인
// 증감(++/--)연산자를 재정의하는 것을 이해해야 합니다.

class Integer{
    private:
    int value;

    public:
    Integer(int n = 0) : value(n)
    {

    }
    
    // 멤버 함수로 연산자 재정의 함수를 제공합니다.
    //++n
    Integer& operator++()
    {
        ++value;
        return *this;
    }
    //n++
    // 차이점) 반환타입이 값 타입입니다.
    Integer operator++(int)
    {
        Integer temp = *this; // 값이 변경되지 전의 상태를 보관합니다.
        ++value;
        return temp;
    }

    friend std::ostream& operator<<(std::ostream& os, const Integer& i);
};

std::ostream& operator<<(std::ostream& os, const Integer& i)
{
    return os << i.value << endl;
}

int main()
{
    int n1;
    cout << n1 << endl;
    ++n1;
    n1++;
    Integer n2;
    cout << ++n2 << endl;
    ++n2;
    n2++;
    // => cout.operator
}