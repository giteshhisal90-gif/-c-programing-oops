#include<iostream>
using namespace std;
int main(){
  int arr[20];
  int n;
  cout << "Enter a size of array: ";
  cin >> n;
  cout << "Enter a element : ";
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }

  for(int i=n-1;i>=0;i--){
    for(int j=i;j>0;j--){
      if(arr[j] < arr[j-1]){
        swap(arr[j],arr[j-1]);
      }
      else
      break;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
}