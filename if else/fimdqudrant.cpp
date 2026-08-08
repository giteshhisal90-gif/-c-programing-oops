#include <iostream>
using namespace std;

int main (){
  int x,y;
  cout << "Enter the value of x and y: ";
  cin >> x >> y;

  if(x>0 && y>0){
    cout << "The point is in the first quadrant." << endl;
  }
  else if(x<0 && y>0){
    cout << "The point is in the second quadrant." <<endl;
  }
  else if(x<0 && y<0){
    cout << "The point is in the third quadrant." << endl;
  }
  else{
    cout << "The point is in the fourth quadrant." << endl;
  }
  
}