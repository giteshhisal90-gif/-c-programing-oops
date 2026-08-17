#include<iostream>
using namespace std;
class Student{

  public : 
    string Name;
    int roll_no;
    float cgpa;

  Student(string n , int r,float g){
      Name = n;
      roll_no = r;
      cgpa = g;
  }
};
int main(){

  Student s1("Gitesh hissal",15,9.17);
 

  Student s2("Aditya patil",1,8.88);

  Student s3("pratik",32,9.02);
  


  cout << "Name : " << s1.Name <<endl;
  cout << "Roll no : " << s1.roll_no <<endl;
  cout << "CGPA : " << s1.cgpa <<endl;
  
  cout << endl;

  cout << "Name : " << s2.Name <<endl;
  cout << "Roll no : " << s2.roll_no <<endl;
  cout << "CGPA : " << s2.cgpa <<endl;

  cout << endl;

  cout << "Name : " << s3.Name <<endl;
  cout << "Roll no : " << s3.roll_no <<endl;
  cout << "CGPA : " << s3.cgpa <<endl;



}