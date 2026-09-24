#include<iostream>
using namespace std;

class Student{
  public:
    int rollno;
    string name;
    float marks;

  void display(){
    cout << "Name : " << name << endl;
    cout << "ROLL no : " << rollno << endl;
    cout << "Marks : " << marks << endl;
  }
  
};
int main(){
  Student s;
  s.name = "gitesh hissal";
  s.rollno = 44;
  s.marks =89.90;
  s.display();

}