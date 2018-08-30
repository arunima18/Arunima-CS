//To check if a number is divisible by 5 and 11 or not
#include<iostream>
using namespace std;
int main(){
  //Declare datatypes
  int a,b,c;
  //Ask values from user
  cout<<"Enter a number"<<endl;
  cin>>a;
  //write condition function
  //Find value of remainder
  b=a%5;
  c=a%11;
  
  //if a is divisible by 5 and 11 both
  if (b==0 && c==0){
  cout<<a<<" is divisible by both 5 and 11"<<endl;
  }
  //else
  else {
  cout<<a<<" is not divisible by both 5 and 11"<<endl;
  }
//return integer
return 9;
//end main function
}
