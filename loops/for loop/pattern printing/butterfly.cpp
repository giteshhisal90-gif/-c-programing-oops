#include<iostream>
using namespace std;

int main(){
  int n;
  cout << " Enter a number of rows: ";
  cin >> n;

  int i,j,k;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout << "*";
    }
    for(k=1;k<=2*n-2*i;k++){
      cout << " ";
    }
    for(j=1;j<=i;j++){
      cout << "*";
    }
    cout << endl;
  }
  for(i=n-1;i>=1;i--){
    for(j=1;j<=i;j++){
      cout << "*";
    }
    for(k=1;k<=2*n-2*i;k++){
      cout << " ";
    }
     for(j=1;j<=i;j++){
      cout << "*";
    }
    cout << endl;
  }
}