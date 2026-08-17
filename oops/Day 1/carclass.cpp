#include<iostream>
using namespace std;

class Car{
  public:
    string name;
    string type;
    int price;
    int sete ;

};

void display(Car c){
  cout << c.name << "   " << c.price << "   " << c.sete << "   " << c.type <<endl;
}

int main(){
  Car c1;
  c1.name ="Maruti sisuki";
  c1.type ="hatchback";
  c1.price = 700000;
  c1.sete = 5;


  Car c2;
  c2.name ="toyota fortuner";
  c2.type ="SUV";
  c2.price = 3600000;
  c2.sete = 8; 


    display(c1);
    display(c2);
}