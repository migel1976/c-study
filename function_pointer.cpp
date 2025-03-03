#include <iostream>
using namespace std;
void inc(int *);
void incPtr(int *m);

void print(const int*x);

int main(){
  int n{10};
  cout<<"value n in main now is "<<n<<endl;
  inc(&n);
  cout<<"value n in main after use in inc function is "<<n<<endl;

  int m{78};
  cout<<"value m in main now is "<<m<<endl;
  int *ptrM{&m};
  incPtr(ptrM);
  /* cout<<"value m in main after use in incPtr function is "<<m<<endl; */
  cout<<"value m in main after use in incPtr function is "<<*ptrM<<endl;

  const int x{111};
  print(&x);
  return 0;
}

void print(const int * const x){
  int z{2};
  /* x=&z; */
  cout<<"z ="<<z<<endl;
  cout<<"*x ="<<*x<<endl;
}

void incPtr(int *m){
  int z{6};
  m=&z;
  cout<<"increment function incPtr value by one "<<*m<<endl;

}

void inc(int *n){
  (*n)++;
  cout<<"increment function inc value by one "<<*n<<endl;
}
