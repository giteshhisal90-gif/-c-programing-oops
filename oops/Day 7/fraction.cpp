#include<iostream>
using namespace std;
class Fraction{
public:
  int num;
  int dev;

   Fraction(int num ,int dev){
    this->num =num;
    this->dev = dev;
   }

   void display(){
    cout << num << "/" << dev <<endl;
   }
  //  Fraction add(Fraction f){
  //   int  Newnum = this->num*f.dev + f.num*this->dev;
  //   int Newdev = this->dev*f.dev;
  //   Fraction ans(Newnum,Newdev);
  //   return ans;
  //  }
    Fraction operator+(Fraction f){
    int  Newnum = this->num*f.dev + f.num*this->dev;
    int Newdev = this->dev*f.dev;
    Fraction ans(Newnum,Newdev);
    return ans;
    }
    Fraction operator-(Fraction f){
    int  Newnum = this->num*f.dev - f.num*this->dev;
    int Newdev = this->dev*f.dev;
    Fraction ans(Newnum,Newdev);
    return ans;
    }
    Fraction operator*(Fraction f){
    int  Newnum = this->num*f.num;
    int Newdev = this->dev*f.dev;
    Fraction ans(Newnum,Newdev);
    return ans;
    }
   
};
int main(){
  Fraction f1(1,2);
  Fraction f2(2,3);

  f1.display();
  f2.display();

  // Fraction f3 = f1.add(f2);
  Fraction f3 = f1 + f2;
  f3.display();

  Fraction f4 = f1-f2;
  f4.display();

  Fraction f5 = f1*f2;
  f5.display();
}