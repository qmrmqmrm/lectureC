# include <iostream>
using namespace std;

// 예외(exception)  - 오류 처리
// 1. c언어의 오류 처리 방법
//  > 반환 값을 통해서 처리합니다.

// 문제점
// 1) 반환된값이 실패를 나타내는 것인지, 연산의 결과인지를 구분하기 어려울 수 있습니다.
// 2) 함수가 오류를 반환할 때, 오류를 반드시 처리하라고 강제화 할 방법이 없습니다.




#if 0
int foo(int a)
{
    if(a < 0)
    {
        return -1; // 실패할 경우 약속된 값을 반환합니다.

    }
    return 0;
}

int main()
{
    int ret = foo(-100);
    if(ret ==-1){
        printf("foo 함수가 실패하였습니다.");
    }
}
#endif


int goo(int a)
{
    if(a < 0){
        throw 1; // 실패할 경우 예외를 던집니다.
                    // 반환(return) 값과 실패(throw)의 전달이 분리됩니다.
    }

    return 0;
}
// 예외 처리 방법
//  => try-catch 블록을 이용합니다.

int main()
{
    try{
        int ret = goo(-100);
        cout << "result : " << ret <<endl;

    }
    catch(int n){
        cout <<"int 오류 발생: "<<n <<endl;
    }
    catch(double d){

    }
    catch(...){
        // ...은 모든 종류의 예외를 catch 할 수 있습니다.
    }
    // 예외가 catch 되면 이후의 코드는 정상적으로 동작합니다.
    
    // teminataing with uncaught exception of type int
    // > 함수가 예외를 던지면 호출자는 반드시 예외를 처리해야 합니다.
    //   예외를 처리하지 않는 경우 , 프로그램은 비정상 종료 처리됩니다.
    cout << "main end .." << endl;
}