//To check whether a number is even or odd
#include<iostream>
using namespace std;
int main(){
//Declare datatypes
int a,b;
//Ask a number from user
cout<<"Enter a number"<<endl;
cin>>a;
  //Write condition
  b=a%2;
  if (b==0){
  cout<<"Even"<<endl;
  }
  else {
  cout<<"Odd"<<endl;
  }
//Return integer
return 0;
//End main function
}
