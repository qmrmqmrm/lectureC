// 상속

#include <iostream>
#include <string>

using namespace std;

#if 0
class Student
{
private:
    string name;
    int age;
    int id;
    /* data */
public:

};

class Professor
{
private:
    string name;
    int age;
    int major;
public:
};
#endif
// 상속 문법을 이용하면 공통의 속성을 관리하는 것이 편리합니다.
// 공통의 속성을 가진 타입을 설계합니다.


//Base / Super 클래스라고 부릅니다.
class User
{
private:
    string name;
    int age;
public:
    User(/* args */);
    ~User();
};

// Derived / Sub 클래스라고 부립니다.
class Student : public User
{
private:
    int id;
public:

};

class Professor : public User
{
private:
   int majir;
public:

};
