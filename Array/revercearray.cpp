#include<iostream>
using namespace std;

int main(){
  int arr[5] = {1,2,3,4,5};
  int i,j;
  for(i=4,j=0;j<i;i--,j++){
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
  }
  for(i=0;i<5;i++){
    cout << arr[i] << " ";
  }

}