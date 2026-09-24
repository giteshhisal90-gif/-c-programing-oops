#include<iostream>
using namespace std;
class Cricketer{
  public:
    string type;
    int run;
    int average;
};
class Engineear{
  public:
    string Domain; 
    int experience;
};
class AllRounder : public Cricketer,public Engineear{
  public:
    string name;
    int ID;
};
int main(){
  AllRounder A;
  A.name = "Gitesh Hissal";
  A.ID = 15;
  A.experience = 3;
  A.type = "Batter";

  cout << A.name << " " << A.ID << " " << A.experience << " "  << A.type << " ";
}