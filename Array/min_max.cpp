#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[5] = {12,32,41,52,11};
  int min = INT_MAX;
  int max = INT_MIN;

  for(int i=0;i<5;i++){

    if(arr[i]>max){
      max = arr[i];
    }

    if(arr[i]<min){
      min = arr[i];
    }
  }

  cout << "Maxinum : " << max <<endl;
  cout << "Minimum: " << min << endl;

}