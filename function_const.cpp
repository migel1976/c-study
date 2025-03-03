#include <iostream>

using namespace std;

void square(const int &n);

int main(){
  const int n{4};
  square(n);
  return 0;
}

void square(const int &n){
  n=n*n;
  cout<<"square is "<<n<<endl;
  /* cout<<"square is "<<n * n<<endl; */
}
