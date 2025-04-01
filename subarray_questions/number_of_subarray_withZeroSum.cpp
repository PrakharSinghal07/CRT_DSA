#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int subarrayWithZeroSum(vector<int> arr, int n)
{
  unordered_map<int, int> map;
  int sum = 0;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    if (sum == 0) ans++;
    ans = ans + map[sum];
    map[sum]++;
  }
  return ans;
}
  int main()
  {
    vector<int> arr = {2, 0, 2, 0, 0, 2, 1};
    int n = arr.size();
    int ans = subarrayWithZeroSum(arr, n);
    cout << ans;
    return 0;
  }