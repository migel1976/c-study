#include <iostream>
using namespace std;

void hello(){
  cout<<"hello"<<endl;
}

void square(int);//передача параметров по значению
// void square(int &);//передача параметров по ссылке

void printVal(int val);
void printRef(int &val);


int main(){
  hello();
  int a{56};
  int &refA=a;
  // square(a);
  square(refA);
  // cout<<"sqaure in main is "<<a<<endl;
  cout<<"sqaure in main is "<<refA<<endl;

  double val{67.78};
  printVal(val);
  printRef(val);
}

void square(int a){
// void square(int &a){
  a*=a;
  cout<<"sqaure in function is "<<a<<endl;
}


void printVal(int val){
  cout<<"printVal val is "<<val<<endl;
}

void printRef(int &val){
  cout<<"printRef val is "<<val<<endl;
}
