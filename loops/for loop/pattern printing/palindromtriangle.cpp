#include<iostream>
using namespace std;

int main(){
  cout << "Enter a number of rows: ";
  int n;
  cin >> n;

  int i,j,k,l;
  for(i=1;i<=n;i++){
    for(l=1;l<=n-i;l++){
      cout << "  ";
    }
    for(j=1;j<=i-1;j++){
      cout << j << " ";
    }
    for(k=i;k>=1;k--){
      cout << k << " ";
    }
    
    cout << endl;
  }
}