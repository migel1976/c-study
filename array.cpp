#include <iostream>
using namespace std;

int main(){
  int arr[]{23,234,34,89,19,700};
  cout<<arr[1]<<endl;
  cout<<endl;

  for(int el:arr){
    cout<<el<<endl;
  }

  cout<<"lenght is "<<sizeof(arr)/sizeof(arr[0])<<endl; //c - style
cout<<"lenght is "<<std::size(arr)<<endl;


  return 0;

}
