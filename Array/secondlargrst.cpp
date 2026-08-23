#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[5] = {10,30,50,78,66};
  int  max = INT_MIN;
  int min = INT_MAX;
  for(int i=0;i<5;i++){
    if(arr[i]>max){
      max = arr[i];
    }
    if(arr[i]<min){
      min = arr[i];
    }
  }
  int sec_max = INT_MIN;
  int sec_min = INT_MAX;
  for(int i=0;i<5;i++){
    if(arr[i]>sec_max && arr[i]<max){
      sec_max = arr[i];
    }
    if(arr[i]<sec_min && arr[i]>min){
      sec_min = arr[i];
    }
  }

  cout << "Maximum : " << max << endl;
  cout << "Minimum : " << min << endl;
  cout << "second Maximum : " << sec_max << endl;
  cout << "second Minimum : " << sec_min<< endl;

}