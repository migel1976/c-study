#include <iostream>

using namespace std;

int main(){
  int *ptr;
  cout<<ptr<<endl;

  int *ptr1{};
  cout<<ptr1<<endl;
  
  double *ptrDbl{nullptr};
  cout<<ptrDbl<<endl;

  cout<<sizeof(ptr)<<endl;
  cout<<sizeof(ptrDbl)<<endl;

  int x{10};
  int *px{&x};
  cout<<px<<"\t"<<*px<<"\t"<<&px<<endl;
  int arr[]{45,98,34,12};
  int *parr{arr};
  cout<<parr<<"\t"<<*parr<<"\t"<<&parr<<endl;
  int len=sizeof(arr)/sizeof(int);
  // for(int i; i<size(parr);i++){
  for(int i; i<len;i++){
    cout<<"\t"<<parr+i<<"\t"<<*(parr+i)<<endl;
  }

  for(int *ptr{arr}; ptr<&arr[size(arr)]; ptr++){
    cout<<ptr<<"\t"<<*ptr<<endl;
  }

  // for(int )

  // return 0;
}
