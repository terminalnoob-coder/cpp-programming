#include<iostream>
using namespace std;
struct cmplx{
int r;
int i;
};
int main(){
  cmplx n1,n2,n3;
  cin>>n1.r>>n1.i;
  cin>>n2.r>>n2.i;
  n3.r=n1.r+n2.r;
  n3.i=n1.i+n2.i;
  cout<<n3.r<<" "<<n3.i;
  
}