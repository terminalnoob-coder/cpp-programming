#include<iostream>
using namespace std;
int main(){
  int n,x;
  cout<<"Enter the size of arr";
  cin>>n;
  cout<<"Enter the elements of arr";
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Enter the number";
  cin>>x;
  for(int i=1;i<n;i++){
    if (arr[i]==x){
      cout<<"The "<<x<<" is present & its index is "<<i;
      return 0;
    }
  }
  cout<<"-1";
  return 0;
  
  
}