#include<iostream>
using namespace std;
void genAllSubSeq(string& str, int i, int n, string& temp){
  if(i == n){
    cout << temp << " ";
    return;
  }

  genAllSubSeq(str, i+1, n, temp);
  temp.push_back(str[i]);
  genAllSubSeq(str, i+1, n, temp);
  temp.pop_back();
}
int main()
{
  string str = "abc";
  string temp = "";
  genAllSubSeq(str, 0, 3, temp);
  
  return 0;
}