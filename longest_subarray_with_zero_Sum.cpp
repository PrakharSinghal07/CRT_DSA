#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int subarrayWithZeroSum(vector<int> arr, int n, int d)
{
  unordered_map<int, int> map;
  int sum = 0;
  int maxLen = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    if (sum == d)
    {
      int len = i+1;
      maxLen = max(maxLen, i + 1);
    }
    if ((map.find(sum - d) != map.end()))
    {
      int index = i - map[sum- d];
      maxLen = max(maxLen, i - index);
    }
    else
    {
      map[sum] = i;
    }
  }
  return maxLen;
}
int main()
{
  vector<int> arr = {2, 0, 2, 0, 0, 2, 1};
  int n = arr.size();
  int d = 3;
  int ans = subarrayWithZeroSum(arr, n, d);
  cout << ans;
  return 0;
}