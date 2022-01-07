#include <iostream>
#include <vector>
using namespace std;

// 1. 자동차에 카메라를 연결 하기 위해 지켜야 하는 규칙을 먼저 설계합니다.
//    => 인터페이스(프로토콜)
//    => 아래처럼 구현이 제공되지 않은, 순수 가상 함수로만 이루어진
//      클래스를 "인터페이스"라고 합니다.


// 인터페이스
//   => 교체 가능하다.
#if 0
class BlackBoxCamrea
{
    public:
        virtual ~BlackBoxCamrea() {}
        virtual void StartRecord() = 0;
        virtual void StopRecord() = 0;
};
#endif
struct BlackBoxCamrea
{
   
    virtual ~BlackBoxCamrea() {}
    virtual void StartRecord() = 0;
    virtual void StopRecord() = 0;
    virtual void NewFeature(){

    }
};

// 3. 카메라의 작성자는 반드시 BlackBoxCamera 인터페이
class Camera : public BlackBoxCamrea{
    public:
        void StartRecord() override
        {
            cout << "Start Record" << endl;
        }

        void StopRecord() override
        {
            cout << "Stop Record"<<endl;
        }
};

class HDCamera : public BlackBoxCamrea{
    public:
        void StartRecord() override
        {
            cout << "[HD]Start Record" << endl;
        }

        void StopRecord() override
        {
            cout << "[HD]Stop Record"<<endl;
        }
};

// 2. BlackBoxCamera를 이용하는 코드로 작성합니다.
class Car{
    private:
        BlackBoxCamrea* pCamera;
    public:
        Car(BlackBoxCamrea* p) :pCamera(p)
        {

        }
        void Start()
        {
            pCamera -> StartRecord();
        }
        void Stop()
        {
            pCamera -> StopRecord();
        }

};
// OCP : 개방 폐쇠 원칙 (Open Close Principle)
// 코드는 수저에는 닫혀있고, 확장에는 열려 있어야 한다.
// : 새로운 기능이 추가되어도, 기존 코드는 

int main()
{
    HDCamera cam;
    Car car(&cam);

    car.Start();
    car.Stop();
}