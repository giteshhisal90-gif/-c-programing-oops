#include <iostream>
using namespace std;
int main(){
  cout << "Enter a number of rows : ";
  int n;
  cin >> n;

  for(int i=1;i<=n;i++){
    char ch = 65;
    for(int j=1;j<=i;j++){
     
      if(i%2 != 0){
        cout << ch << " ";
        ch++;
      }
      else{
      cout << j << " ";
      }
    }
    cout << endl;
  }
}