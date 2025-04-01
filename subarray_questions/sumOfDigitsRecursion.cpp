#include<iostream>
using namespace std;
int sumOfDigits(int n){
  if(n == 0){
    return 0;
  } // base case

  return n%10 + sumOfDigits(n/10);
}
int main(){
  cout << sumOfDigits(321);
  return 0;
}