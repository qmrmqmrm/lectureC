// 일반 함수 포인터와 멤버 함수 포인터는 다른 개념입니다.
// => 간접층의 원리
//  : 소프릍웨어의 난제는 간접층을 도입하므로써문제를 해ㅕㄹ 할 수 있습니다.

#include <iostream>

using namespace std;


// 3.FuntionComman와 MemberC
struct IComman
{
    virtual ~IComman() {}
    virtual void Excute() = 0 ;
};


// 1. 일반함수 포인터 역활을 수행하는 클래스를 설계합니다.
void foo() { cout << "foo"<< endl;}
class FunctionCommeand : public IComman{
    public:
    using HANDLER = void(*)();

    HANDLER handler;

    FunctionCommeand(HANDLER h)
        : handler(h)
    {

    }

    void Excute() override { (*handler)();}
};
//2. 멤버 함수 포인터 역할을 수행하는 클래스를 설계합니다.
// - 모든 클래스 타입의 멤버 함수를 참조할 수 있어야합니다.
//  => 템플릿 기반으로 설계 합니다.

template <typename T>
class MemberCommand : public IComman{
public:
    using HANDLER = void(T::*)();
    HANDLER handler;
    T* object;

    MemberCommand(HANDLER h, T* o)
        :handler(h), object(o)
    {

    }

    void Excute() override {(object->*handler)();}
};

class Dialog{
    public:
    void Open() { cout << "Dialog Open" << endl;}

};
// 4. 클래스 템플릿은 타입 추론이 동작하지 않습니다.
//    함수 템플릿은 타입 추론이 동작합니다.
//    클래스를 생성하는 함수 템플릿을 제공합니다.

template <typename T>
MemberCommand<T>* cmd(void (T::*h)(), T*obj)
{
    return new MemberCommand<T>(h,obj);
}


// 5.일관성을 위해서 FuntionCommand를 생성하는 함수도 제공합니다.
FunctionCommeand* cmd(void (*f)())
{
    return new FunctionCommeand(f);
}

#if 0
int main()
{
    FunctionCommeand f1(&foo);
    f1.Excute();
    Dialog dlg;
    // 클래스 템플릿은 타입 추론이 불가능합니다.
    // T의 타입을 명시적으로 지정해주어야 합니다.
    MemberCommand<Dialog> f2(&Dialog::Open, &dlg);
    f2.Excute();

    // IComman* fp = new FunctionCommeand(&foo);
    IComman* fp = cmd(&foo);
    fp->Excute();

    fp = new MemberCommand<Dialog>(&Dialog::Open, &dlg);
    fp = cmd(&Dialog::Open, &dlg);
    fp->Excute();
}
#endif


class MenuItem {
    std::string title;

    IComman* pCommand;

public:
    MenuItem(const std::string& s)
        : title(s), pCommand(nullptr)
    {
    }
    void SetCommand(IComman* p)
    {
        pCommand = p;
    }
    virtual void Command()
    {
        // cout << title << " 메뉴가 선택됨" << endl;
        if (pCommand)
            pCommand->Excute();
    }
};

int main()
{
    MenuItem m1("저장");
    MenuItem m2("불러오기");

    m1.SetCommand(cmd(&foo));
    Dialog dlg;
    m2.SetCommand(cmd(&Dialog::Open, &dlg));
    

    m1.Command();
    m2.Command();
}