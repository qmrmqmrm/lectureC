#if 0
#include <iostream>

using namespace std;

ostream& xendl(ostream& os)
{
    os <<'\n';
    return os;
}


int main()
{
    cout << endl;
    endl(cout);

    cout << xendl;
    xendl(cout);
}
#endif

#if 0
#include <stdio.h>

namespace std {
    class ostream 
    {
    public:
        ostream& operator<<(int n)
        {
            printf("%d", n);
            return *this;
        }

        ostream& operator<<(const char* s)
        {
            printf("%s", s);
            return *this;
        }

        ostream& operator<<(double d)
        {
            printf("%lf", d);
            return *this;
        }
        //-------
        ostream& operator<<(char c)
        {
            printf("%c", c);
            return *this;
        }
        ostream& operator<<(ostream& (*f)(ostream&))
        {
            f(*this); 
            return *this;
        }


    };
ostream& endl(ostream& os)
{
    os <<'\n';
    return os;
}
ostream cout;
}
#endif
#include <iostream>

std::ostream& tab(std::ostream& os)
{
    os <<'\t';
    return os;
}


int main()
{
    // std::cout << 42;
    // std::cout << ", ";
    // std::cout << 3.14;

    std::cout  << std::endl<< 42 <<std::endl<<tab<<52<<std::endl;
    // cout.operator<<(std::endl)
    // 함수 포인터로 전달
}