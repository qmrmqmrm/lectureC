#include <iostream>

using namespace std;

// int a; => int
// int x[10] => int[10]
// int y[3] => int[3]

// c++ 함수는 배열을 인자로 전달받을때
// decay를 수행합니다.
// : 배열의 첫번째 원소의 시작 주소가 전달됩니다.
//  배열을 전달 받는 함수는 반드시 길이에 대한 추가정보를 인자를 통해 전달해야 합니다.
/*
void foo(int* x)
{
    for(int i =0; i < 10; ++i)
    {
        cout << x[i] << endl;
    };
}

void goo(int *x)
{
    for (int i =0; i <3; ++i)
    cout << x[i]<<endl;
}

int main()
{
    int y[3] = {1,2,3};
    goo(y);
    int x[10] = {1,2,3,4,5,6,7,8,9,10};

    foo(x);
}
*/
/*
void foo(int* x, int n)
{
    for(int i =0; i < n; ++i)
    
        cout << x[i] << endl;

}


int main()
{
    int y[3] = {1,2,3};
    foo(y,3);
    int x[10] = {1,2,3,4,5,6,7,8,9,10};

    foo(x,10);
}
*/
//decay roll
/*
void foo(int* x, int n)
{
    for(int i =0; i < n; ++i)
    
        cout << x[i] << endl;

}

// int*p[2] -  포인터 배열*
// int(*p)[2] -  배열 포인터*
void goo(int(*p)[2], int n, int m)
{
    for(int i=0; i <n; ++i)
    {
        foo(p[i], m);
    }
}
*/
/*
int main()
{

    int x[10] = {1,2,3,4,5,6,7,8,9,10};

    foo(x,10);
    cout << endl;
    int y[3] = {1,2,3};
    foo(y,3);


    int z[3][2] = {{1,2},{3,4},{5,6}};
    // z의 타입 : int[3][2]
    // [int[2]] [int[2]] [int[2]]

    cout << endl;
    goo(z, 3, 2);

    cout << endl;
    auto a = y[0];
    //auto를 사용하면 우항의 타입과 동일한 타입으로 컴파일 타임에 결정됩니다.
    auto p = &y[0];
    // audo aa; //오류
    // 반드시 우항이 필요합니다.



}
*/
//typedef
// : 기존 타입의 별칭을 만들어서 사용할 수 있습니다.
// 복잡한 타입을 간결하게 사용할 수 있습니다.
// x: [int[3]][int[3]]
typedef int(*POINTER)[3];
void hoo(int(*p)[3])
{

}
void goo(POINTER p)
{

}
//c++11 에서는 typedef 말고, using을 통해서 타입의 별칭을 만들 수 있습니다.
// 1) 가독성이 좋다.
// 2) typedef는 '템플릿'의 문법에서는 사용할 수 없습니다.

using POINTER2 = int(*)[3];
void xoo(POINTER2 p)
{

}

int main()
{
    int x[2][3];
    hoo(x);
    goo(x);
    xoo(x);

}