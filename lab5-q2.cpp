#include<iostream>
using namespace std;
int main(){
  //declare datatypes
  int a;
  //ask values from user
  cout<<"Enter a number "<<endl;
  cin>>a;
  //write the condition function
  //if a is +ve,print +ve
  if (a>0){
  cout<<"positive"<<endl;
  }
  
  //else if a is -ve, print -ve
  else if (a<0){
  cout<<"Negative"<<endl;
  }
  //else if a is zero, print 0
  else if (a==0){
  cout<<"Zero"<<endl;
  }
//return integer
return 10;
//end main function
}   
