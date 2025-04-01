#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> arr = {4,-16,1,17};
  int n = arr.size();                                                                                                                                                                       
  int maxSum = INT32_MIN;
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
    maxSum = max(sum, maxSum);
    if(sum < 0){
      sum = 0;
    }

  }
  cout << maxSum;
  return 0;
}