#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  vector<int> v;
  v.push_back(2);
  v.push_back(5);
  v.push_back(7);
  v.push_back(4);
  v.push_back(3);

  for(auto i: v)
  cout << i <<" ";

  cout <<endl;
  cout<<"Incresing order : " <<endl;

  sort(v.begin(), v.end());
  for(auto i:v)
  cout << i<<" ";

  cout << endl;
  cout<<"Deccrising order : " <<endl;
  sort(v.begin(),v.end(),greater<int>());
  for(auto i : v)
  cout << i <<" ";


  // binary serch
cout << "\nbinary : ";
  cout << binary_search(v.begin(),v.end(),4);


  // to find index

cout << "\nIndex : " << distance(v.begin(), find(v.begin(), v.end(), 5));
}