#include <iostream>
using namespace std;

int main(){
  int n ,m ;
  cout << "Enter a rows and coloumns : ";
  cin >> n;
  cin >> m;

  for(int i=1 ; i<=n ; i++){
    for(int j=1 ; j<=m ; j++){
      cout << j << " ";
    }
    cout << endl;
  }
}