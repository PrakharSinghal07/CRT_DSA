#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int subarrayWithZeroSum(vector<int> arr, int n, int d)
{
  unordered_map<int, int> map;
  int sum = 0;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    if (sum == d) ans++;
    ans = ans + map[sum - d];
    map[sum]++;
  }
  return ans;
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