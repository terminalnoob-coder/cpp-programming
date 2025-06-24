#include<iostream>
using namespace std;
int main(){
  int k=0;
  int n;
  cin>>n;
  while(n>0){
    k=n%10;
    cout<<k;
    n=n/10;
    
  }
}
