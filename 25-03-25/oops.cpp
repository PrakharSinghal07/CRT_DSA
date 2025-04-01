#include<iostream>
using namespace std;
class Test{
  public:
  void sum(int a, int b)
  {
    cout << "Sum is: " << a+b << endl;
  }
  void sum(int a, int b, int c){
    cout << "Sum is: " << a+b+c << endl;
  }
};
int main()
{
  Test  t1;
  t1.sum(10, 20);
  t1.sum(10, 20, 30);
  return 0;
}