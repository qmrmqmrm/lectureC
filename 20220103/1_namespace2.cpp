// 1_namespace2.cpp
#include <iostream>
// 1. 전체 이름을 사용하는 방법
// : 이름 공간과 함수의 이름을 

/*
int main()
{
    std::cout << "Hello, cpp" << std::endl
            << "HELLO, CPP" << std::endl;
}
*/

// 2. using 선언(decla을 사용하는 방법.
/*
using std::cout;
using std::endl;

int main()
{
    cout << "Hello, cpp" << endl
            << "HELLO, CPP" << endl;
}
*/

// 3.using 지시어(directive)
/*
using namespace std;

int main()
{
    cout << "Hello, cpp22" << endl
            << "HELLO, CPP22" << endl;
}
*/

// 4.이름 충돌
#include <algorithm>


using namespace std; 
int count;
int main()
{
    cout << "Hello, cppasd2" << endl
            << "HELLO, CPP22" << endl;
}