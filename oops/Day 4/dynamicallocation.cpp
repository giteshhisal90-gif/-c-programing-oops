#include<iostream>
using namespace std;

class Student{
public:
  string name;
  int roll_no;
  float marks;

  Student(string name,int roll_no,float marks){
    this->name = name;
    this->roll_no = roll_no;
    this->marks = marks;
  }

};

int main(){
  Student s1("gitesh",15,9.17);
  Student *s2 = new Student("Yash",18,9.99);

  cout << s1.name << " " << s1.roll_no << ' ' << s1.marks << endl;
  cout << s2->name << " " << s2->roll_no << " " << s2->marks << endl;

}