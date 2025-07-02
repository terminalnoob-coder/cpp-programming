#include<iostream>
using namespace std;

int main() 
{
  int ans=0;
  int r1,c1,r2,c2;
  cin>>r1>>c1;
  int a[r1][c1];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cin>>a[i][j];
    }
  }
  cin>>r2>>c2;
  int b[r2][c2];
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      cin>>b[i][j];
    }
  }
  if(c1!=r2){
    cout<<"Multiplication not possible since c1!=r2";
    return 0;
  }
  int c[r1][c2];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      ans=0;
      for(int k=0;k<c1;k++){
        ans=ans+a[i][k]*b[k][j];
      }
      c[i][j]=ans;
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
}