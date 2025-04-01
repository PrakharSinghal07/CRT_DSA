#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool subarrayWithZeroSum(vector<int> arr, int n){
  unordered_set<int> s;
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
    if((s.find(sum) != s.end()) || (sum == 0)){
      return true;
    }
    s.insert(sum);
  }
  return false;
}
int main()
{
  vector<int> arr = {1,2,-1,-2,13};
  int n = arr.size();
  bool ans = subarrayWithZeroSum(arr, n);
  cout << ans;
  return 0;
}