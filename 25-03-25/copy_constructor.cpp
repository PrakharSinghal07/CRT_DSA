#include <iostream>
using namespace std;
class Test
{
public:
  int a;
  int* b;
  Test(int a=0, int b=0)
  {
    this->a = a;
    this->b = new int(b);
  }
  Test(const Test &obj)
  {
    a = obj.a;
    b = new int(*obj.b);
  }
};
int main()
{
  Test t1(5, 6);
  Test t2(t1);
  *t1.b = 200;
  cout << t2.a << " " << *t2.b;
  int x = 5;
  cout << ++x + ++x;
  return 0;
}