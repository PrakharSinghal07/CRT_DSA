#include<iostream>
using namespace std;
int func(int* a){
  (*a)++;
}
int main()
{
  int a;
  char b;
  cin >> a;
  cin >> b;

  cout << a << " " << b;

  return 0;
}