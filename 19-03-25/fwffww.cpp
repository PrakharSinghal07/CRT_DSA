#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 4, 1, 3, 6, 2, 6};
  int n = 8;
  int maxi = arr[0], smax = INT32_MIN;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > maxi)
    {
      smax = maxi;
      maxi = arr[i];
    }
    else if (arr[i] > smax)
    {
      if (arr[i] != maxi)
        smax = arr[i];
    }
  }
  
  cout << maxi << "    " << smax;
  return 0;
}
