#include <iostream>
using namespace std;
struct Base{
int x;
void show(){
  cout<<x<<endl;
}
};
struct Derived:public Base{
int y;
void print(){
  cout<<y<<endl;
}
};
int main(){
  Derived d;
  d.x=10;
  d.y=20;
  d.show();
  d.print();
}