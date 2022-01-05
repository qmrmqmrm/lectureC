#include <iostream>

using namespace std;

/*
int main()
{
    double d  =3.4;
    int n =d;

    // int *p = &d; // double* -> int* 암묵적인 변환이 허용되지 않습니다.
    int *p = (int *)&d;  // 명시적인 변환은 가능합니다.
    
}
int main()
{
    int n = 0;
    double *p = (double *) &n;
    *p = 3.14;
} //버그 발생
*/
// c언어의 캐스팅은 대부분 성공하기 때문에, 많은 버그의 원인이 됩니다.
// c++에서는 c 캐스팅의 문제점을 해결하기 위해서 4가지 캐스팅 연산자를 제공합니다.

// 1) static_cast
//    가장 기본적인 변환 연산자 입니다.
//    컴파일 시간에 타입을 채크해서 캐스팅을 수행합니다.
//    - 서로 연관성이 없는 타입은 캐스팅이 허용되지 않습니다.


// void * : 모든 타입의 주소를 담을 수 있는 포인터 타입입니다.
//          하지만 참조하는 대상체의 크기를 알 수 없기 때문에 참조 연산은 수해이 불가능합니다.


int main()
{

    // int *p2 = (int*)malloc(sizeof(int)); // c



    int n =10;

    void *p = &n;
    // void*를 다른 타입으로 변환하는 것은 프로그램 작성시에 반드시 필요합니다.
    int *pi = static_cast<int *>(p);

    // double *pd = static_cast<double *>(pi);
    // 잘못된 형식 변환 입니다.


    // 메모리를 읽는 방법을 변경하고자 할 때 사용한다.
    // - reinterpret_cast
    // int * -> double *

    double *pd = reinterpret_cast<double *>(pi);


}



// 2) dynamic_cast
// 3) const_cast
// 4) reinterpret_cast

// static(정적) : 컴파일 타임에 결정됩니다.
// dynamic(동적), virtual(가상)



