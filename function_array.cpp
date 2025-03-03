#include <iostream>
using namespace std;
void print(int[]);
void printptr(int *);
void printarr(int *, int *);
void printchar(const char *);


int main(){
  int array[]{1238,45,78,89,23};
  print(array);
  for(int el:array){
    cout<<el<<endl;
  }
  printptr(array);

  int *begin{std::begin(array)};
  int *end{std::end(array)};
  printarr(begin, end);

  const char *chars="hello world!!!";
  printchar(chars);
  return 0;
}

void printchar(const char *chars){
  for(int i{};chars[i]!='\0';i++){
    cout<<chars[i]<<endl;
  }
}

void printarr(int *begin, int *end){
  cout<<"printarr "<<endl;
  for(int *ptr{begin}; ptr!=end; ptr++){
      cout<<*ptr<<endl;
      }
}

void printptr(int *arr){
  cout<<"printptr "<<*arr<<endl;
}

void print(int arr[]){
  cout<<"print "<<*arr<<endl;
  
  //не работает это код
  // for(int el:arr){
  //   cout<<el<<endl;
  // }
}
