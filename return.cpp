#include <iostream>
using namespace std;

void print(string name, unsigned);
/* auto sum(int a, int b); // прототип не работает с определением auto  */
auto sum(int a, int b){
 return a + b; 
}

int main(){
  print("jim", 24);
  print("john", 789);

  cout<<"cумма равна "<<sum(56,89)<<endl;

  return 0;
}

void print(string name, unsigned age){
  if(age>120){
    cout<<"input incorrect age "<<endl;
    return;
  }
  cout<<"you name is "<<name<<" and your age is "<<age<<endl;
}

