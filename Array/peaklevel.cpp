#include<iostream>
using namespace std;

int main() {
  int arr[10] = {1,3,5,8,19,17,15,13,11,9};
  int n = 10;
  int start = 0;
  int end = n-1;
  int mid;
  while(start < end){
    mid = end + (start - end)/2;
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
      cout << "Peak element is: " << arr[mid] << endl;
      break;
    }
    else if(arr[mid]<arr[mid-1]){
      end = mid - 1;
    }
    else{
      start = mid + 1;
    }
  }
    return 0;
}