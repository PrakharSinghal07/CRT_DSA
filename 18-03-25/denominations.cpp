#include<iostream>
using namespace std;
int main()
{
  int totalMoney;
  cout << "Enter total money : ";
  cin >> totalMoney;
  int rupee100Notes = totalMoney / 100;
  totalMoney = totalMoney % 100;
  int rupee50Notes = totalMoney / 50;
  totalMoney = totalMoney % 50;
  int rupee20Notes = totalMoney / 20;
  totalMoney = totalMoney % 20;
  int rupee1Notes = totalMoney;
  cout << "Rupee 100 notes = " << rupee100Notes << endl;
  cout << "Rupee 50 notes = " << rupee50Notes << endl;
  cout << "Rupee 20 notes = " << rupee20Notes << endl;
  cout << "Rupee 1 notes = " << rupee1Notes << endl;
  return 0;
}