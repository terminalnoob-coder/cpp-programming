#include<iostream>

using namespace std;
union Point{
int x;
float y;
};
int main(){
  Point t;
  t.y=3.1;
  
  cout<<t.x;
}