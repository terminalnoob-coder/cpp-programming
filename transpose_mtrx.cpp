#include<iostream>
using namespace std;
int main(){
  int r,c;
  cin>>r>>c;
  int arr1[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>arr1[i][j];
    }
  }
  int arr2[c][r];
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      arr2[i][j]=arr1[j][i];
      cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
  }
}