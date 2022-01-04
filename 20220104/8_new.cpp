#include <iostream>

//동적 메모리 할당
// malloc / free

using namespace std;

int g = 100;
// 수명 : 프로그램 시작 - 끝
// 장점 : 언제 어디서든 쉽게 접근이 가능하다.
//        - 복잡도를 낮출 수 있다.
// 단점 : 함수가 전역 변수에 의존할 경우,
//       함수의 재사용성이 떨어진다.
// 전역 변수는 실행 파일에 영향을 준다.
int add(int a, int b)
{
    return a + b + g;
}

void foo()
{
    int a;
    // 지역 변수 (auto 변수)
    //  스택에 저장됩니다.
    //  foo 함수가 실행될 때 생성되고, foo 함수가 끝날 때 해지 됩니다.
    //   메모리 할당 해지의 비용의 없다.
    static int b;
    // 내부 정적 변수
    // 전역 변수와 동일한 영역으로 관리됩니다.( 데이터 영역)
    // 할당되는 시점은 foo 함수가 처음 실행될 때 생성되고, 프로그램이 종료 할 때까지 유지됩니다.
    // 함수가 상태를 가져야 할 때 사용합니다.
}

#include <string.h>
// 동적 메모리 할당
// 힘(자유영역)에 생성되는 변수 입니다.
// 개발자가 원하는 시점에 생성할 수 있고, 개발자가 원하는 시점에 파괴할 수 있습니다.
// 1) 메모리 누수의 위험성이 있다.
// 2) 성능 오버헤드가 있습니다.
// 
// 
/*
int main()
{
    // char str[] = "hello world show me the money";
    // char* p = strtok(str, " ");
    // printf("%s\n", p);

    // p = strtok(NULL, " ");
    // printf("%s\n", p);
    char str[] = "hello world show me the money";
    for (char* p = strtok(str, " "); p !=NULL; p = strtok(NULL, " "))
        printf("%s\n", p);


}
*/
// c++ 동적 메모리 관련 연산자를 제공합니다.
// new / delete
// 1. malloc/free는 함수이지만 , new/delete는 연산자입니다.
// 2. malloc은 메모리 크기를 인자로 전달하지만, new는 타입을 전달합니다.
// 3. malloc은 void*를 반환하기 때문에, 캐스팅이 필요하지만,
//    new는 전달 ㅂ다은 타입의 주소로 반환 하기 때무에 별도의 캐스팅이 필요하지 않습니다.
// 4. malloc은 free로 해지하지만, new는 delete를 통해 해지해야합니다.


int main()
{
    // int *p -static_cast<int *>(malloc(sizeof(int) *5));

    int *p = new int;
    int *arr = static_cast<int *> (malloc(sizeof(int) * 5));

    // int arr[5];
    arr  = new int[5];
    // 주의 사항
    // 연속된 메모리를 할당한 경우, delete에 대해서 배열 형태의 해지 연산을 사용햐야합니다.
    delete[] arr;

}