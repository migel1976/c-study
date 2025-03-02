#include <iostream>
#include <stdio.h>

int main(){
  float a{4}; 
  float b{6};
  int c=a>b?a+b:a*b;
  printf("c is %d \n",c);

  // printf("c aslo can use on those case %f ", a==b?a-b:static_cast<float>(a/b));
  printf("c aslo can use on those case %f ", a==b?a-b:a/b);

  return 0;
}
