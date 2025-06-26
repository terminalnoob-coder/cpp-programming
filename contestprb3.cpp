#include<iostream>
using namespace std;
int main(){
int n;
  cout<<"Enter the size of array"<<"\n";
cin>>n;
int arr[n];
  cout<<"Enter the elements of array"<<"\n";
for( int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
  if(i<n-1){
    arr[i]=(arr[i]|arr[i+1]);
      cout<<arr[i]<<" ";
  }
  else
    cout<<arr[i];
}
  return 0;
}