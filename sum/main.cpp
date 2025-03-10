#include <iostream>
#include "sum.h"
using std::cout;
using std::endl;

int main(){
  int a{56};
  int b{45};
  cout<<"сумма двух чисел "<< a <<"+"<< b <<" равна " << sum(a, b) << endl;
}
