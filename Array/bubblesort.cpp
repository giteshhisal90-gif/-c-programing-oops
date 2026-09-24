#include<iostream>
using namespace std;
int main(){
  int n;
  int arr[20];
  cout << "enter a size of array : \n";
  cin >> n;
  cout << "Enter a elements : \n";
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }

  for(int i=n-2;i>=0;i--){
    bool swaps = 0;
    for(int j=0;j<=i;j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j],arr[j+1]);
        swaps = 1;
      }
    }
    if(swaps == 0){
      break;
    }
  }

  for(int i=0;i<n;i++)
  cout << arr[i] << " ";
}