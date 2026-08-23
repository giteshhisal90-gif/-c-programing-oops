#include<iostream>
using namespace std;

int main(){
  int arr[5] = {11,23,44,23,12};
   
  int sum =0 ;
  for(int i=0;i<5;i++){
    sum += arr[i];
  }

  cout << "sum : " << sum ;
}