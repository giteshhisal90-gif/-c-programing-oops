#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter a number of rows : ";
  cin >> n;

  int i,j;
  for(i=1;i<=n;i++){
    for(j=i;j>=1;j--){
      cout << j <<" ";
    }
    cout <<endl;
  }

}