#include<iostream>
using namespace std;
class Scooty{
  public:
  string name;
  virtual void  sound(){
    cout << "vroom vroom" << endl;

  }
};
class Bike{
  public:
    string name;

  void sound(){
    cout << "Dhroom Dhroom " << endl;
  }
};
int main(){
  Scooty* s = new Scooty;
  s->sound();
}