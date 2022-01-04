#include <iostream>
using namespace std;

// 6_reference2.cpp
// 1) call by value
void inc1(int x)
{
  ++x;
}

// 2) call by pointer
void inc2(int *x)
{
  ++(*x);
}

void inc3(int &x)
{
  ++x;
}

int main()
{
  int n = 10;
  // inc1(n);
  // inc2(&n);
  inc3(n);

  cout << n << endl;
}