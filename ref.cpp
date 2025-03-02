#include <iostream>
using namespace std;


int main(){
  int a{6};
  int &refA{a};
  // int &refInt=10;

  cout<<"var a is "<<a<<endl;
  refA=78;
  cout<<"reference to a is "<<refA<<endl;
  // cout<<"var a is "<<a<<endl;

  a=23;
  cout<<"reference to a is "<<refA<<endl;

  // const int x{67};
  int x{67};
  const int &refX{x};
  cout<<"reference to const int "<<refX<<endl;
  // refX=90;
  // cout<<"reference to const int "<<refX<<endl;
  x=90;
  cout<<"reference to const int "<<x<<endl;
  cout<<"reference to const int "<<refX<<endl;


  int numbers[]{1,2,3,4,5};
  for(auto &n:numbers){
    n=n*2;
  }
  for(auto n:numbers){
    cout<<n<<endl;
  }
  
  return 0;
}
