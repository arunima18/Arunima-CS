//Define Library
#include<iostream>

using namespace std;

//Write main funation
int main(){

//Declare datatypes
float cel;
float frnht;

//Ask value from user
cout<<"What is the temperature in degree centigrade? "<<endl;

//Input value from terminal
cin>>cel;

//Convert cel into frnht
frnht=((cel*1.8)+32);

//Print the answer
cout<<"The temperature in Farenheit scale is "<<frnht<<endl;

//return integer 
return 0;
}
