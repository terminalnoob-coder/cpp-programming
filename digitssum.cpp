#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int sum=0;
  int digit=0;
  while(n>0){
    digit=n%10;
    sum+=digit;
    n=n/10;
  }
  cout<<"Sum of digits is "<<sum;
}