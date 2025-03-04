#include <iostream>
using namespace std;


int main(){
  cout<<"работа с указателями"<<endl;

  int n{70};
  int *ptrN{&n};

  cout<<"значение переменной n "<<n<<endl;
  cout<<"адрес переменной n "<<&n<<endl;
  cout<<"адрес переменной n через указатель "<<ptrN<<endl;
  cout<<"значение переменной n через указатель "<<*ptrN<<endl;
  cout<<"адрес указателя "<<&ptrN<<endl;

  *ptrN=35;//изменяем значение переменной через указатель путем разименования
           
  cout<<"значение переменной n "<<n<<endl;
  cout<<"адрес переменной n "<<&n<<endl;
  cout<<"адрес переменной n через указатель "<<ptrN<<endl;
  cout<<"значение переменной n через указатель "<<*ptrN<<endl;
  cout<<"адрес указателя "<<&ptrN<<endl;

  int a{10};
  int b{25};

  int *pA{&a};
  int *pB{&b};

  cout<<"value a "<<a<<endl;
  cout<<"ptr to a "<<pA<<endl;
  cout<<"value b "<<b<<endl;
  cout<<"ptr to b "<<pB<<endl;

  cout<<endl;

  pA=pB;
  cout<<"ptr to a "<<pA<<endl;
  cout<<"ptr to b "<<pB<<endl;

  cout<<endl;
  *pB=56;
  cout<<"указатель на переменную Б "<<*pA<<endl;
  cout<<"value b "<<b<<endl;


  char c{'N'};
  char *pc{&c};
  int *pd{(int* )pc};
  void *pv{(void* )pc};

  cout<<"char pointer "<<pc<<endl;
  cout<<"int pointer "<<pd<<endl;
  cout<<"void pointer "<<pv<<endl;
  
  cout<<endl;
  cout<<"char pointer "<<&pc<<endl;
  cout<<"int pointer "<<&pd<<endl;
  cout<<"void pointer "<<&pv<<endl;

  cout<<endl;
  cout<<"char pointer "<<*pc<<endl;
  cout<<"int pointer "<<*pd<<endl;
  // cout<<"void pointer "<<*pv<<endl;
  //
  //
  //операция над указателями
  // int x{10};
  // int *pX{&x};
  short x{190};
  short *pX{&x};

  cout<<"pX : "<< "adress px : "<< pX << " value px" << *pX << endl;

  pX++;
  cout<<"pX : "<< "adress px : "<< pX << " value px" << *pX << endl;

  pX--;
  cout<<"pX : "<< "adress px : "<< pX << " value px" << *pX << endl;


  int k{10};
  int *pk{&k};

  int m{20};
  int *pm{&m};

  int pdiff=pm-pk;
  cout<<pk<<endl;
  cout<<pm<<endl;
  cout<<pdiff<<endl;

  *pk++;
  cout<<k<<endl;

  return 0;
}


