#include<iostream>
using namespace std;
class Student{

  public : 
    string Name;
    int roll_no;
    float cgpa;


};
int main(){

  Student s1;
  s1.Name = "Gitesh Hissal";
  s1.roll_no = 15;
  s1.cgpa = 9.17;

  Student s2;
  s2.Name = "Aditya patil";
  s2.roll_no = 01;
  s2.cgpa = 8.88;

  Student s3;
  s3.Name = "Pratik nagtilak";
  s3.roll_no = 32;
  s3.cgpa = 8.88;


  cout << "Name : " << s1.Name <<endl;
  cout << "Roll no : " << s1.roll_no <<endl;
  cout << "CGPA : " << s1.cgpa <<endl;


  cout << "Name : " << s2.Name <<endl;
  cout << "Roll no : " << s2.roll_no <<endl;
  cout << "CGPA : " << s2.cgpa <<endl;


  cout << "Name : " << s3.Name <<endl;
  cout << "Roll no : " << s3.roll_no <<endl;
  cout << "CGPA : " << s3.cgpa <<endl;



}