#include <iostream>
using namespace std;

int main(){
  const int a{10};
  // int a{10};
  const int *pa{&a};

  cout<<"adress "<<pa<<" value "<<*pa<<endl;
  // (*pa)++;
  // *pa=56;
  const int b{65};
  pa=&b;
  cout<<"adress "<<pa<<" value "<<*pa<<endl;
  return 0;
}
