#include <iostream>
#include <vector>
using namespace std;
void merge(int *arr, int start, int mid, int end)
{
  vector<int> temp;
  int i = start;
  int j = mid + 1;
  while (i <= mid && j <= end)
  {
    if(arr[i] <= arr[j]){
      temp.push_back(arr[i++]);
    }
    else{
      temp.push_back(arr[j++]);
    }
  }
  while(i <= mid){
    temp.push_back(arr[i++]);
  }

  while(j <= end){
    temp.push_back(arr[j++]);
  }
  i = start;
  for(int k=0; k< end-start+1; k++){
    arr[i++] = temp[k];
  }
}
void mergeSort(int *arr, int start, int end)
{
  if (start >= end)
  {
    return;
  }
  int mid = start + (end - start) / 2;
  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);
  merge(arr, start, mid, end);
}
int main()
{
  int arr[] = {5,4,3,2,1};
  int n = 5;
  mergeSort(arr, 0, n-1);
  for(int elem : arr){
    cout << elem << " ";
  }
  return 0;
}