#include <iostream>
using namespace std;
//RTTI(Run-Time Type Information)
// 개념: 실행 시간에 타입을 조사하는 기술

class CAR{
    public:
        virtual ~CAR(){}
        int color=200;
};

//부모 소멸자가 가상이면 자식 클래스의 소멸자도 가상입니다.
class Sedan : public CAR{
    public:
        
        int speed=100;
};

void Go(CAR* p)
{
    //p가 Sedan이면 speed를 출력 하고 싶다.
    //채크 없이 사용할 경우
    // Sedan* s = static_cast<Sedan*>(p);
    // cout <<"Speed: "<< s->speed<<endl;
    // RTTI 사용방법
    // - 모든 타입은 자신의 타입의 정보를 가지고 있는 
    // type_info 구조체가 있습니다.
    // : typeid 연산자를 통해 얻어 올 수 있습니다.
    // 1) 객체를 통해서 얻을 수 있습니다.
    const type_info& t1 = typeid(*p);
    // 2) 클래스 타입을 통해서 얻을 수 있습니다.
    const type_info& t2 = typeid(Sedan);

    // => 만약 동일한 타입이면 t1,과 t2는 동일합니다.
    if (t1==t2)
    {
        cout <<"p는 sadan 타입입니다."<< endl;
        Sedan* s = static_cast<Sedan*>(p);
        cout <<"Speed: "<< s->speed<<endl;
    }
    else
    {
        cout <<"p는 sadan 타입이 아닙니다."<< endl;
    }

    // cout <<t.name() <<endl;
    // 문제점 : 
    //  1. type_info를 통해 얻을 수 있는 문자열 이름이
    //     표준화에 포함되지 않았습니다.
    //     > 컴파일러마다 다른 결과가 나옵니다.
    //  2. type_info는 가상함수 테이블 안에 존재 합니다. 

}

void Go2(CAR* p)
{
    //실행시간에 하위 캐스팅을 타입 체크를 수행하면서 하고 싶다.
    // => dynamic_cast
    // 가상함수 테이블을 이용합니다.

    Sedan* s1 = static_cast<Sedan*>(p); // 부모클래스도 바꿔준다
    Sedan* s2 = dynamic_cast<Sedan*>(p);// 부모클래스는 nullptr로 반환한다.

    cout << s1 <<endl;
    cout << s2 <<endl;
    cout << endl;

    if (s2 != nullptr)
    {
        cout << "speed :" <<s2->speed<<endl;
    }
}

int main()
{
    CAR c;
    Sedan s;
    Go(&c);
    Go(&s);
    Go2(&c);
    Go2(&s);

}


