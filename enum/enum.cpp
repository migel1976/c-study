#include <iostream>
using namespace std;

enum class Band{C=1, Ku, Ka};
using enum Band;

enum Pol{L, R, H, V};

int main(){
  int band=static_cast<int>(Band::Ku);
  cout<<band<<endl;
  cout<<static_cast<int>(Ka)<<endl;
  // cout<<Band::C<<endl;
  Pol polL=V;
  cout<<polL<<endl;

  return 0;
}
