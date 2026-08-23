#include<iostream>
using namespace std;
int main(){
  int arr[6] = {1,2,3,5,6,7};
  int x , index=-1;
  cout << "Enter a element : ";
  cin >> x;

  for(int i=0;i<6;i++){
    if(arr[i] == x){
      index = i; 
      break;
    }
  }
  if(index != -1)
   cout <<"Element found at index : " <<  index;

  else 
  cout << "Element not found";
}