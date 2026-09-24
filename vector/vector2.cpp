#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v={1,2,3,4,5};
  for(int i=0;i<v.size();i++)
  {
    cout << v[i] << " ";
  }
  cout<<endl;
  v.pop_back();
   for(int i=0;i<v.size();i++)
  {
    cout << v[i] << " ";
  }

  cout<<endl;

  v.erase(v.begin()+1);
  for(int i=0;i<v.size();i++)
  {
    cout << v[i] << " ";
  }

  cout<<endl;

  for(auto i: v)
  cout << i << " ";


  cout << endl;
  v.clear();
  cout<<"Size of vector: "<< v.size()<<endl;
  cout<<"capacity of vector : "<<v.capacity()<<endl;

  

}