#include<iostream>
using namespace std;

int main(){
  int n=6;
  int arr[n]={1,2,4,3,6,5};
  int target = 7;

  int start =0;
  int end = n-1;

  while (start<end){
    if(arr[start]+arr[end]==target){
      cout << arr[start] << " " << arr[end]  << endl;
    }
    else if(arr[start]+arr[end]<target)
    {
      start++;
    }
    else{
      end--;
    }
  }
  
  
}