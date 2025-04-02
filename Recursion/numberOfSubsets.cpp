#include <iostream>
#include <vector>
using namespace std;

int subSetSumProblem(vector<int> &arr, int i, int n, int sum, int target)
{

  if (i == n)
  {
    if (sum == target)
      return 1;
    else return 0;
  }

  int notPick = subSetSumProblem(arr, i + 1, n, sum, target);
  int pick = subSetSumProblem(arr, i + 1, n, sum + arr[i], target);
  return pick + notPick;
}
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  int target = 5;
  int sum = 0;
  cout << subSetSumProblem(arr, 0, 5, sum, target);
  return 0;
}