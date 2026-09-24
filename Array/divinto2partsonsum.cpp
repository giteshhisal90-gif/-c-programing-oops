#include<iostream>
#include<vector>

using namespace std;
bool divide(vector<int>&v){
  int prefix =0 ,total_sum=0;
  for(int i=0;i<v.size();i++){
    total_sum += v[i];
  }
  for(int i=0;i<v.size()-1;i++){
    prefix += v[i];
    if(total_sum==2*prefix){
      return 1;
    }
  }

  return 0;

}
int main(){
  int n;
  cout<<"Enter a size of array: ";
  cin>>n;
  vector<int>v(n);
  cout<<"Enter a element of array: ";
  for(int i=0;i<n;i++){
    cin >> v[i]; 
  }

  int reult=divide(v);
  cout<<reult;
}
