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

  void display(){
    cout << name <<  " " << roll_no << " " << marks << endl;
  }


};
void change(Student* s){
  // (*s).name = "Yash";
  // (*s).roll_no = 66;
  s->name = "Yash";
  s->roll_no = 66;
}
int main(){
  Student s1("gitesh",15,9.17);
  Student *p = &s1;
  cout << (*p).marks<<endl;
  (*p).display();
  (*p).name = "Vivek";
  p->display();
  // pass by refrence
  change(&s1);
  (*p).display();
  // s1.display();
}