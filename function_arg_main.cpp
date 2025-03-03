#include <iostream>

using namespace std;

int main(int argv, char** argc){
  for(int i{};i<argv;i++){
    cout<<argc[i]<<endl;
  }
  return 0;
}
