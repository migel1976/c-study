#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  int a=90;
  //нотация присваивания
  cout<<"нотация присваивания "<<a<<endl;

  int b{56};
  //braked нотация
  printf("braked notaion %d \n",b);

  //function нотация
  int c (78);
  printf("function notaion %d \n",c);


  // int d{45.67};//warning and error
  int d(45.67);//warning
  // int d=45.67;//warning
  cout<<"null value for varible "<<d<<endl;


  int e{1'234'678};
  cout<<"varible e "<<e<<endl;

  // cout<<"hello world!!"<<endl;
  cout<<"Привет мир!!!"<<endl;

  auto k{56.89};
  cout<<"auto var k "<<k<<endl;
  return 0;
}
