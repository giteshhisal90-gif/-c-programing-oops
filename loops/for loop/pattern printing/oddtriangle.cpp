#include <iostream>
using namespace std;

int main(){
  for(int i=1;i<=5;i++){
    int a = 1;
    for(int j=1;j<=5+1-i;j++){
      cout << a << " ";
      a = a + 2;
    }
    cout << endl;
  }
}