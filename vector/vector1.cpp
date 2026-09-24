#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v;
  cout<<"Size of vector: "<< v.size()<<endl;
  cout<<"capacity of vector : "<<v.capacity()<<endl;

  v.push_back(2);
  v.push_back(3);
  v.push_back(5);
  v.push_back(6);
  v.push_back(7);

  cout<<"Size of vector: "<< v.size()<<endl;
  cout<<"capacity of vector : "<<v.capacity()<<endl;


  // update value

  v[1]=10;
  
}