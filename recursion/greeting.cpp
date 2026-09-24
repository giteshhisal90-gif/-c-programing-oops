#include<iostream>
using namespace std;
void greeting(int n){
  if(n == 0) return;
  cout << "good morning gokuldham ! \n";
  greeting(n-1);
  return;

}
int main(){
  int n;
  cout << "Enter a number : ";
  cin >> n;

  greeting(n);
  return 0;
}