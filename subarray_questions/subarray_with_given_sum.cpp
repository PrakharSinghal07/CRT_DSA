#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool subarrayWithGivenSum(vector<int> arr, int n, int d){
  unordered_set<int> s;
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
    if((s.find(sum - d) != s.end()) || (sum == d)){
      return true;
    }
    s.insert(sum);
  }
  return false;
}
int main()
{
  vector<int> arr = {9,1,1,1,1,1,1};
  int n = arr.size();
  int d = 3;
  bool ans = subarrayWithGivenSum(arr, n, d);
  cout << ans;
  return 0;
}