#include <iostream>
using namespace std;

// 클래스토 템플릿으로 만들 수 있습니다.
// 타입에 독립적인 스택을 만들 수 있습니다.

template <typename T>

class Stack
{
    T *buff;
    int idx;

public:
    Stack(int sz = 10)
    {
        idx = 0;
        buff = new T[sz];
        // 사용자가 전달한 크기 만큼 버퍼를 할당합니다.
    }

    ~Stack()
    {
        delete[] buff;
    }
    void push(const T &v)
    {
        buff[idx++] = v;
    }

    T pop()
    {
        return buff[--idx];
    }
};

struct Complex
{
    /* data */
};


// 클래스 템플릿은 타입 추론이 불가능합니다.
// 명시적으로 타입을 지정해 주어야 합니다.
Stack<int> s1;
int main()
{
    Stack<long> s2(100);
    Stack<double> s3{100};
    s1.push(232323);
    s2.push(20);
    cout << s1.pop() << endl;
    cout << s2.pop() << endl;
}