#include <iostream>
using namespace std;

int main(){
  for(char c: "hello"){
    cout<<c<<endl;
  }

  int num[]{1,2,67,89};
  for(int i{}, j{6}; i<6 && j<10;i++, j++){
    cout<<i<<"*"<<j<<"="<<i*j<<endl;
  }

  for(;;){
    cout<<"введите число 0 для завершения цикла"<<endl;
    int a{};
    cin>>a;
    if(a==0) break;
    cout<<"площадь квадрата равна "<<a*a<<endl;

      // a==0 ? break : cout<<"площадь квадрата равна "<<a*a<<endl;
  }
  return 0;
}
