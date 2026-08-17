#include<iostream>
using namespace std;
void afrika(){
  cout << "i am in afrika\n";
}
void usa(){
  cout << "i am in usa\n";
  afrika();
  cout << "back in usa\n";
}
void India(){
  cout << "i am in india\n";
  usa();
  cout << "back in india\n";
}
int main(){
  cout << "i am in main function\n";
  India();
  cout << "back to main \n";
  cout << "all functions are run \n";
}