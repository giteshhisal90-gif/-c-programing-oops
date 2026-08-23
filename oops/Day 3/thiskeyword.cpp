#include<iostream>
using namespace std;

class Student {
  public:
    int rollno;
    string name;
    float marks;

    Student(int rollno,string name,float marks){
      this->name = name;
      this->rollno = rollno;
      this->marks = marks;
    }
};
int main(){
    Student s1(15,"Gitesh hissal",9.17);
    Student s2(11,"vivek raut",8.89);

    cout << s1.name << " " << s1.rollno << " " << s1.marks << endl;
    cout << s2.name << " " << s2.rollno << " " << s2.marks << endl;

}
