#include<iostream>
using namespace std;
int main(){
  int arr[10] = {11,12,15,18,19,1,2,3,5,7};
  int n = 10;
  int start = 0;
  int end = n-1;
  int mid;
  int ans = arr[0];
  while(start < end){
    mid = start + (end - start)/2;
    if(arr[mid]>arr[0]){
      start = mid + 1;
    }
    else{
      ans = arr[mid];
      end = mid-1;
    }
  }
  cout << "Minimum element is: " << ans << endl;
}