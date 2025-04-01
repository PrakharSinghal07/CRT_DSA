#include<iostream>
using namespace std;
class Test{
  public:
  int a;
  int* ptr;
  Test(int a){
    this->a = a;
    ptr = new int(10);
  }
  Test(const Test &t){
    a = t.a;
    ptr = new int(*t.ptr);
  }
};
int main()
{
  Test t1(5);
  Test t2(t1);
  *t1.ptr = 100;
  cout << *t2.ptr;

  return 0;
}