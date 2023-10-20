/*
Write a program that swapping private data of classes using friend function
*/

#include<iostream>

using namespace std;

class class2;class class1{
  int a;
  public:
  class1(int x){a=x;}

  void showData(){cout<<"a = "<<a<<endl;}

  friend void swap(class1,class2);
};

class class2{
  int b;
  public:
  class2(int x){b=x;}

  void showData(){cout<<"b = "<<b<<endl;}

  friend void swap(class1,class2);
};

void swap(class1 data1,class2 data2){
  int temp=data1.a;
  data1.a=data2.b;
  data2.b=temp;

  cout<<"After Swapping :"<<endl;
  cout<<"a = "<<data1.a<<endl;
  cout<<"b = "<<data2.b<<endl;
}

int main(){

  class1 obj1(9);
  class2 obj2(26);

  cout<<"Before Swapping :"<<endl;

  obj1.showData();
  obj2.showData();

  swap(obj1,obj2);

  return 0;
}