#include <iostream>
#include <vector>
using namespace std;

bool subSetSumProblem(vector<int> &arr, int i, int n, int sum, int target)
{
  if (sum == target)
    return true;
  if (i == n)
    return false;
  bool notPick = subSetSumProblem(arr, i + 1, n, sum, target);
  bool pick = subSetSumProblem(arr, i + 1, n, sum + arr[i], target);
  return (notPick or pick);
}
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  int target = 9;
  int sum = 0;
  cout << (subSetSumProblem(arr, 0, 5, sum, target) ? "true" : "false");
  return 0;
}