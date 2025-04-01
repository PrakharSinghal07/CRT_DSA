#include <iostream>
using namespace std;
class Test
{
public:
  int a;
  // void sum(Test t)
  // {
  //   cout << "Sum is: " << a + t.a << endl;
  // }
  Test operator+(Test t){
    Test temp;
    temp.a = a + t.a;
    return temp;
  }
};
 int main()
{
  Test t1;
  t1.a = 10;
  Test t2;
  t2.a = 20;
  Test t3 = t1 + t2;
  cout << "Sum is: " << t3.a << endl;
  return 0;
}