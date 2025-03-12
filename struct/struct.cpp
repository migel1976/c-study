#include <iostream>
using namespace std;

struct person
{
  unsigned age;
  string name;
};

int main(){
  // person jim;
  // jim.age=67;
  // jim.name="jim";
  person jim{27, "kate"};
  cout<<jim.age<<" "<<jim.name<<endl;
  return 0;
}
