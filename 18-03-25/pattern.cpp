#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  for (int i = 1; i <= n; i++)
  {
    int a = 1;
    for (int k = 1; k <= n - i; k++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << " " << a << "  ";
      a = a * (i-j)/j;
    }
    cout << endl;
  }
  return 0;
}