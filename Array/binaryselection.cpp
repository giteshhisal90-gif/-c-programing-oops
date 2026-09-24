#include<iostream>
#include<climits>
using namespace std;
int main(){
  int key;
  cout << "Enter a elemnt to find : ";
  cin >> key;
  int arr[10]={1,3,5,7,9,11,13,14,16,19};
  int n = 10,mid;
  int start = 0;
  int end =n-1;
  bool find;
  int index;
  while(start <= end){
    mid = start + (end - start)/2;
    if(arr[mid] == key){
       find = 1;
       index = mid;
      break;
    }
    else if(arr[mid] < key){
      start = mid +1;
    }

  else{
    end = mid -1;
  }
  }

  if(find == true){
    cout << "Element find at : " << index << " index";
  }
  else{
    cout << "Element not found";
  }
  
}