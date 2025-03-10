#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Person{
  // public:
    const string m_name;
    int m_age;
  public:
    // Person(string name, int age){
    // Person(string name, int age):m_name{name}
    // Person(string name, int age):m_name(name), m_age{age}
    Person(string name, int age):m_age{age}, m_name(name) 
    {
      // m_name=name;
      // m_age=age;
    }
    void print(){
      cout<<"You age is "<<m_age<<" and your name is "<<m_name<<endl;
    }
  // private:
  //   const string m_name;
  //   int m_age;
};

int main(){
  // Person jim("Jim", 28);
  Person jim=Person("Ray",67);
  jim.print();
  cout<<"his age is "<<int{jim.m_age}<<endl;

  return 0;
}
