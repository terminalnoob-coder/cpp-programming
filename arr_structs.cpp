#include<iostream>
using namespace std;
struct Point{
int x;
int y;
};
int main(){
  Point arr[6];
  for(int i=0;i<6;i++){
    arr[i].x=i;
    arr[i].y=10*i;
    
  }
  for(int i=0;i<6;i++){
    cout<<arr[i].x<<" "<<arr[i].y<<endl;
  }
}