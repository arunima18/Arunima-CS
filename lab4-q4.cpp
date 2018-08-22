//Define library
#include<iostream>

using namespace std;

//Write main function
int main(){

//Declare variables
float A,B,C;

//Ask value of A 
cout<<"What is the value of first angle(in degrees)? "<<endl;

//Input value of A
cin>>A;

//Ask value of B
cout<<"What is the value of second angle(in degrees)?"<<endl;

//Input value of B
cin>>B;

//Calculate third angle
C=(180-(A+B));

//Print the result
cout<<"The value of third angle is "<<C<<" degrees"<<endl;

//Return integer
return 1;

}
