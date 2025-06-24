#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
    int max=0;
  while(n>0){
    if(n>max){
      max=n;
    }
    cin>>n;
  }
  cout<<"Max is "<<max;
}