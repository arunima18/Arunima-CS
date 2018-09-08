/* By Reference */

#include<iostream>
using namespace std;

//Write a program with a function that takes two int parameters, adds them together
void sumR(int a,int b, int &total){
total=a+b;
}
int main(){
int sum,a,b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
sumR(a,b,sum);
cout<<sum<<endl;
return 0;
}

// the function that adds the numbers should be void
//pass by reference parameter then put the sum in that.

