// c언어에서 0은 int 타입이지만, 컴파일러에 의해서 특별하게 처리됩니다.


int main()
{
    // int *p = 10; // error
    int *p =0; // ok
    // 0은 정수이지만 포인터로 암묵적 형변환이 됩니다.

    int *p = nullptr;
    // int a = nullptr; //error
    // bool b = nullptr; // error
    bool b(nullptr); // 직접 쵝화 시 nullptr을 bool에 암묵적 변환이 허용됩니다.
    
}
