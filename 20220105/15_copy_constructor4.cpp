#include <iostream>
#include <cstring>
using namespace std;

class User
{
  char *name;
  int age;

  // 2. 참조 계수 기반
  // 참조 계수 관리할 수 있는 변수
  int *ref;

public:
  User(const char *n, int a) : age(a)
  {
    name = new char[strlen(n) + 1];
    strcpy(name, n);

    // 2. 참고 계수 기반
    ref = new int; // 참조 계수 변수를 할당하고
    *ref =1;       // 1로 초기화합니다.
  }

  // 컴파일러가 제공하는 복사 생성자의 형태입니다.
  // User(const User &rhs) : name(rhs.name), age(rhs.age) {}

  // 1. 깊은 복사 버전 복사 생성자
  /*
  User(const User &rhs) : age(rhs.age)
  {
    name = new char[strlen(rhs.name) + 1];
    strcpy(name, rhs.name);
  }
  */
  // 2. 참조 계수 기반
  /// 참조 계수 관리 할 수 있는 변수
  /*
  User(const User& rhs)
  : name(rhs.name), age(rhs.age) , ref(rhs.ref)
  {
    ++(*ref);
  }
  
  ~User()
  {
    if (--(*ref) ==0)
    {
      delete[] name;
      delete ref;
    }
    
  }
  */
  // 3. 복사 금지
  User(const User& rhs) = delete;
};

int main()
{
  User user1("Yoon", 42);

  // User user2(user1);
}

// 1. 깊은 복사


// 클래스 내부에 포인터가 있고,
// 동적 메모리 할당된 메모리가 있다면, 컴파일러가 기본으로
// 제공하는 복사 생성자는 얕은 복사 현상으로 인해 문제가 발생 할 수 있습니다.
// 사용자는 반드시 복사 생성자를 직접 제공해야 합니다.
// > 제공 하는 방법 3가지
// 1. 깊은 복사
// user1:  [name] ---> [YOON\0]
// user2:  [name] ---> [YOON\0]

// 2. 참조 계수 기반 수명 관리
// 3. 복사 금지
