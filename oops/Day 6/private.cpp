#include<iostream>
using namespace std;
class Student{
  public:
    string name;
    int rollno;

  int setmarks(int marks){
    this->marks = marks;
  }
  void display(){
    cout << "Name : " << name << endl;
    cout << "ROLL no : " << rollno << endl;
    cout << "Marks : " << marks << endl;
  }
  private:
    float marks;
};
int main(){
  Student s;
  s.name="Gitesh Hissal";
  s.rollno = 44;
  // s.display();
  s.setmarks(89.90);
  s.display();
}