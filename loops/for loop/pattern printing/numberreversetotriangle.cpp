#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter a number of rows : ";
  cin >> n;

  int i,j,k,s;
  for(i=1;i<=n;i++){
    for(s=1;s<=(n+1)-i;s++){
      cout << "  ";
    }
   
    for(k=1;k<=i-1;k++){
      cout << k << " ";
    }
    for(j=i;j>=1;j--){
      cout << j <<" ";
    }
    cout << endl;
  }

}