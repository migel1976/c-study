#include <iostream>

using namespace std;
int* max(int a, int b){
  if(a>b)return &a;
  return &b;
}

int main(){
  int *maxPtr{max(67,89)};
}
