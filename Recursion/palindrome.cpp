#include<iostream>
using namespace std;
bool palindrome(string str, int i, int j){
  if(i > j){
    return true;
  } // base case

  return (str[i] == str[j] && palindrome(str, i+1, j -1));

  //* OR
  // if(str[i] != str[j]){
  //   return false;
  // }
  // return palindrome(str, i+1, j -1);
}
int main(){
  string str = "naman";
  int i = 0, j = str.length() - 1;
  bool ans = palindrome(str, i, j);
  cout << ans;
  return 0;
}