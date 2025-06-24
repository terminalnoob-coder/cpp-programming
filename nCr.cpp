#include<iostream>
using namespace std;
int fac(int a){
  int k=1;
  for(int i=1;i<=a;i++){
    k=k*i;
  }
  return k;
}
int nCr(int n,int r){
  int m=fac(n)/(fac(r)*fac(n-r));
  return m;
}
int main(){
  int n,r;
  cin>>n>>r;
  cout<<nCr(n,r);
  
}