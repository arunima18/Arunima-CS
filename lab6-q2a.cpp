/*  (By Value) */

#include<iostream>
using namespace std;

//function that takes two int parameters, adds them together, then returns the sum.
//returntype function (parametres)
int sum(int a, int b){
int sum;
sum=a+b;
return a+b;
}
//main function
int main(){
int a,b,z;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
//call the function with the numbers as arguments

z=sum(a,b);
//tell the user the sum
cout<<z<<endl;
return 0;
}
//declaration
//The program should ask the user for two numbers
