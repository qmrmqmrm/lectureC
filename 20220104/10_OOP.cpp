// 객체 지향 프로그래밍(object oriented programming)

// 추상화를 만들어 
// 내가 필요한 포인트를 뽑아낸다.

#include <iostream>

using namespace std;

// 복소수 2개의 합을 구하는 함수를 말들어 봅시다.
/*
add(int ar, int ai, int br, int bi)
{
    int sum_r = ar + br;
    int sum_i = ai + bi;

    return ...
}
*/
// 1. out parameter
// int *sr, int *si = out parameter
// : 결과를 전달받기 위한 파라미터
/*
void add(int ar, int ai, int br, int bi, int* sr, int* si)
{
    *sr = ar + br;
    *si = ai + bi;
}


int main()
{
    int ar =1, ai= 1;
    int br=2,bi=2;

    int sr = 0, si=0;
    add(ar,ai,br,bi,&sr,&si);
}
*/

// 2. 복소수 타입을 도입합니다.
// 구조체를 사용합니다.

struct Complex
{
    int re;
    int im;
};

// 객체 지향 프로그램의 핵심
// : 모델링
// 프로그램에 필요한 타입을 먼저 설계하고 프로그램을 만들자.



Complex Add(const Complex& c1, const Complex& c2)
{
    Complex result = {c1.re + c2.re, c1.im + c2.im};
    return result;
}

void printComplex(const Complex& complex)
{
    cout << complex.re <<"+" << complex.im <<"i"<< endl;
}
int main()
{

    Complex c1 ={1,1};
    Complex c2 = {2,2};
    Complex result = Add(c1, c2);
    printComplex(result);
    
}




