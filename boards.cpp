#include<iostream>
using namespace std;
int main(){
  int phy,chem,math;
  cout<<"Enter the marks of physics: ";
  cin>>phy;
  cout<<"Enter the marks of chemistry: ";
  cin>>chem;
  cout<<"Enter the marks of math: ";
  cin>>math;
  int total=phy+chem+math;
  if(phy&&chem&&math>=33)
  {cout<<"You have passed the exam"<<endl;
   if(total/3.0>=75)
     cout<<"Qualified for JEE";
     else
     cout<<"Not Qualified for JEE";
  }
  else
  cout<<"Not Yet";
  return 0;
  
}