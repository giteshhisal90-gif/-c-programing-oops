#include<iostream>
using namespace std;

class Vehical{
  public:
    string company;
    float milage;
 
  private:
     int prno;
};
class twowheeler : public Vehical{
  public:
    string type;
};
class fourwheeler : public Vehical{
  public:
    string type;
};
class Bike : public twowheeler{
  public:
    string bikename;
};
class car : public fourwheeler{
  public:
    string carname;
    
};

void dispaly(car c){
   cout << "company : " << c.company << endl;
   cout << "Type : " << c.type << endl;
   cout << "Car Name : " << c.carname << endl;
   cout << "milage : " << c.milage << endl;
  
}
int main(){
  car c;
  c.company = "TATA";
  c.carname = "Tata Tiago";
  c.milage = 4.8;
  c.type = "TwoWheeler";
  dispaly(c);

}
