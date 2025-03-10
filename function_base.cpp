#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

const int LEN=5;
int n{LEN};

void hello(){
  int n{5};
  for(n;n>0;n--){
    cout<<"hello world!!!"<<endl;
  }
}

void print(){
  // static int n{1}; //cтатическая переменная используется для подсчета кол-ва вызовов функции
  // int n{1};
  cout<<n<<endl;
  n++;
}

// void person(string, unsigned=18);
void person(auto, unsigned=18);

void square(auto &);


int main(){
  hello();
  cout<<"expression will be repeat "<<::n<<" times"<<endl;
  int count{};
  while(count<LEN){
    print();
    count++;
  }
  
  string name{};
  cout<<"Введите ваше имя"<<endl;
  cin>>name;

  int age{};
  cout<<"Введите возраст"<<endl;
  cin>>age;
  person("jim");

  auto a{56};
  cout<<"сторона квадрата равна "<<a<<endl;
  square(a);
  cout<<"площадь квадрата равна "<<a<<endl;

  return 0;
}

void person(auto name, unsigned age){
  cout<<"you name is \t"<<name<<" and age is \t "<<age<<endl;
}

void square(auto &a){
  a*=a;
}
