#include<iostream>
using namespace std;
int main()
{
  int a = 11;

  cout << ((a & 1) == 0 ? "even":  "odd");
  return 0;
}