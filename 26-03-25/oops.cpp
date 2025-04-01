#include<iostream>
using namespace std;
class A{
  int a;
  public:
  A(){
    cout << "A";
  }
};

class B : virtual public A{
  int b;
  public:
  B(){
    cout << "B";
  }
};
class C : virtual public A{
  int c;
  public:
  C(){
    cout << "C";
  }
};

class D : public B, public C{
  int d;
  public:
  D(){
    cout << "D";
  }
};
int main()
{
  D obj;
  return 0;
}