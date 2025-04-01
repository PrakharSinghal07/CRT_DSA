#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
  unordered_map<int,string>mp;
  mp.insert({1,"Prakhar"});
  // mp.insert({1,"hiehgieghieg"});
  mp.insert({2,"Naresh"});

  mp[3] = "Narru";
  mp[4] = "Baghu";
  // cout << mp.size();
  // mp.erase(1);   key is passed
  mp[1] = "Narru Baghu";
  for(auto it : mp){
    cout << it.first << " : " << it.second << endl;
  }
  return 0;
}