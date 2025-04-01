#include <iostream>
using namespace std;
class Test
{
  int a;
  int b;

public:
  Test(int a, int b){
    this->a = a;
    this->b=b;
  }
  // void setter(int a, int b)
  // {
  //   this->a = a;
  //   this->b = b;
  // }
  int getA(){
    return a;
  }
  int getB(){
    return b;
  }

  int sum()
  {
    return a + b;
  }
};


int main()
{
  // Test t1;
  // t1.setter(5,6);
  // // cout << t1.a << " " << t1.b;
  // cout << "a = " << t1.getA() << " and b = " << t1.getB() << endl;
  // cout << "Sum is " << t1.sum();

  // new keyword
  Test* t2 = new Test(5,6);
  // t2 -> setter(5,6);
  cout << "a = " << t2->getA() << " and b = " << t2->getB() << endl;
  cout << "Sum is " << (*t2).sum();
  return 0;
}