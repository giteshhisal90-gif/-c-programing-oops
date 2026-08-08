#include <iostream>
using namespace std;

int main(){
    float principal, rate, time, simple_interest;

    // take input principle
    cout << "Enter a principle rate : ";
    cin >> principal;

    // take input rate
    cout << "Enter a rate : ";
    cin >> rate;

    // take input of time
    cout << "Enter a Time : ";
    cin >> time;

    // apply logic
    simple_interest = ( principal * rate * time)/100;

    // print simple_interest
    cout << "The simple interest is : " << simple_interest;

   return 0;
}