#include <iostream>
using namespace std;

int main(){
  int arr[]{1,22,355,5,6};

  cout<<"adress first element in array "<<arr<<endl;
  cout<<"value first element in array "<<*arr<<endl;
  // int len = sizeof(arr)/sizeof(int);
  // cout<<len<<endl;
  int i{};
  // for(;i<len;){
  for(;i<std::size(arr);){
    cout<<"element "<<i <<" adress "<<arr+i<<" value "<<*(arr+i)<<endl;
    i++;
  }
  cout<<endl;

  //так не работает
  // int x{78};
  // arr{&x};
  //
  int *pa{&arr[2]};
  cout<<pa<<"\t"<<*pa<<endl;
  cout<<endl;
  for(int *ptr{arr};ptr<&arr[size(arr)];ptr++){
    cout<<"adress "<<ptr<<" value "<<*ptr<<endl;
  }


  const char *phello{"hello"};
  cout<<phello<<endl;
  cout<<*phello<<endl;
  cout<<*(phello+1)<<endl;
  // void *pv{(void*)phello};
  short *pv{(short *)phello};
  cout<<pv<<endl;
  cout<<pv++<<endl;



  return 0;
}
