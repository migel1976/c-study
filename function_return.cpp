#include <iostream>

using namespace std;
// int* max(int *a, int *b){
//   if(*a>*b)return a;
//   return b;
// }
const int& max(const int a, int b){
  if(a>b)return a;
  return b;
}

int main(){

  int a{678};
  int b{123};
  cout<<max(a, b)<<endl;

  // int *maxptr{max(&a,&b)};
  // cout<<*maxptr<<endl;
  // cout<<*max(&a, &b)<<endl;
}
