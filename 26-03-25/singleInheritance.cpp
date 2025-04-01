#include<iostream>
using namespace std;
class One{
  public:
    int a;
};

class Two : public One{
  public:
    int c;
    int a;
};


int main()
{
  Two t1;
  t1.a = 5;
  cout << t1.a;
  return 0;
}