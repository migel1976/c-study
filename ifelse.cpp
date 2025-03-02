#include <iostream>
using namespace std;
int main(){
  int a{6};
  int b{3};

  if(int c{a%b}; c==0) cout<<c<<endl;
  else cout<<"wtf"<<endl;
  return 0;
}
