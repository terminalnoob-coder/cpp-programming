#include <iostream>
using namespace std;
int *fun(){
  int *ptr=new int;
  *ptr=10;

  return ptr;}
int main(){

  cout<<*fun();
  int* ptr=fun();
  delete ptr;
  return 0;

}