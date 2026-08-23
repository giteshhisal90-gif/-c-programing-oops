#include<iostream>
using namespace std;

class Vector
{

public:
    int size;
    int capacity;
    int *arr;

  Vector(){
    size = 0;
    capacity=1;
    arr = new int[1];

  }

  void add(int ele){
    if(size == capacity){
      capacity *= 2;
      int *arr2 = new int[capacity];
      for(int i=0;i<size;i++){
        arr2[i] = arr[i];
      }
      arr = arr2;
    }
    arr[size++] = ele;
  }

  void display(){
     for(int i=0;i<size;i++){
        cout << arr[i] << " ";
      }
      cout << endl;
  }

  int get(int indx){
    if(size == 0){
      cout << "array is emty";
      return -1;
    }
    if(indx >= size || indx<0){
      cout << "Invalid index";
      return -1;
    }
    return arr[indx];
  }

  void remove(){
    if(size == 0){
      cout << "Array is empty";
    }
    size --;
  }
  
};

int main(){
Vector v;
v.add(10);
v.display();
cout << "capacity: " << v.capacity << endl;
cout << "size : " << v.size << endl;


v.add(11);
v.display();
cout << "capacity: " << v.capacity << endl;
cout << "size : " << v.size << endl;


v.add(12);
v.display();
cout << "capacity: " << v.capacity << endl;
cout << "size : " << v.size << endl;
cout << v.get(1) << endl;

}