#include <iostream>
using namespace std;

int main(){
  int age_ram , age_sham , age_ajay;
  cout << "Enter the age of Ram, Sham and Ajay: ";
  cin >> age_ram >> age_sham >> age_ajay;

  if(age_ram > age_sham){
    if(age_sham > age_ajay){
      cout << "ajay is the youngest." << endl;
    }
    else{
      cout << "sham is the youngest." << endl;
    }
  }
  else{
    if(age_ram > age_ajay){
      cout << "ajay is the youngest." << endl;
    }
    else{
      cout << "ram is the youngest." << endl;
    }
  }
}