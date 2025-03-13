#include <iostream>
using namespace std;

class Person final
{
  public:
    Person(string name, int age){
      this->name=name;
      this->age=age;
    }
    void print(){
      cout<<"your age is "<<age<<" and your name is "<<name<<endl;
    }
  private:
    int age;
    string name;
};

class Employee: public Person{
  public:
    Employee(string occupation, string name, int age ) : Person(name, age), occupation(occupation){
    // Employee(string occupation, string name, int age ) : Person(name, age){
    //   this->occupation=occupation;
    }
  private:
    string occupation;
};

int main(){
  int age=34;
  string name="jim";
  string occupation="shaman";
  Employee bob{occupation, name, age};
  bob.print();

  return 0;
}
