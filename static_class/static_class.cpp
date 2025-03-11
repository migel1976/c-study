#include <iostream>
#include <string>

using namespace std;

class Person{
  public:
  Person(string name){
    m_name=name;
    m_count++;
  }
  void print(){
    cout<<"your name is "<<m_name<<" and count is "<<m_count<<endl;
  }
  // static inline const int m_count{}; //ошибка при переопределении значения
  static inline int m_count{};
  private:
    string m_name;

};

int main(){
  Person jim("jim");
  Person john("john");
  Person robby("robby");
  jim.print();
  cout<<"count of person is "<< Person::m_count<<endl;
  // Person::m_count=67;
  // cout<<"count of person is "<< Person::m_count<<endl;

  return 0;
}
