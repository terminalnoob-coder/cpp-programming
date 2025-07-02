#include <iostream>
using namespace std;
template<typename T>
T myMax(T arr[],int n){
 T res=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>res)
      res=arr[i];
  }
  return res;
}
int main(){
  int a[5]={'a','b','c','d','e'};
  cout<<(char)myMax(a,5);
}