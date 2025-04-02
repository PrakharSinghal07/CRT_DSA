#include<iostream>
using namespace std;
void reverse(int* arr, int start, int end){
  int i = start, j = end;
  while(i<j){
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
}
int main()
{
  int arr[] = {1,2,3,4,5};
  int k = 2;
  int n = 5;
  k = k % n;
  reverse(arr, 0, n-1);  // Move this at end for right rotation.
  reverse(arr, 0, k);
  reverse(arr, k+1, n-1);
  for(int elem : arr){
    cout << elem << " ";
  }
  return 0;
}