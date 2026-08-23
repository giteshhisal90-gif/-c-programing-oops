#include<iostream>
using namespace std;

class Student{
  public:
    string name;
    int rollno;
    float marks;
    int age;

  Student(){  //defoult constructor

  }
  Student(string n,int r, float m,int a){
    name = n;
    rollno = r;
    marks = m;
    age = a;
  }

  void display(){
    cout << "Name : " << name << endl;

    cout << "Roll no : " << rollno << endl;
    cout << "Marks : " << marks << endl;
    cout << "Age : " << age << endl;
  }

};

int main(){
  Student s1("Gitesh Hissal",15,9.17,19);
  s1.display();

  cout << endl;

  Student s2;
  s2.name = "yash telangre";
  s2.rollno = 1;
  s2.age = 19;
  s2.marks = 8.88;
  s2.display();

  cout << endl ; 
  
  Student s3 = s1;  //Deep copy
  s3.name = "Pratik nagu";
  s3.display();
}