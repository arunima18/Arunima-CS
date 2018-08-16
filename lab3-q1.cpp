//Define the library
#include<iostream>

using namespace std;

//The main function
int main(){

//Declare the datatype
int a;

//Assign value to variable
a=3;

char charvar;
charvar='s';

bool boolvar;
boolvar=false;

float d;
d=1.23566;

double doublevar;
doublevar=6.75866325;

//Print the values of variables

cout<<"a="<<a<<endl;
cout<<"charvar="<<charvar<<endl;
cout<<"boolvar"<<boolvar<<endl;
cout<<"d="<<d<<endl;
cout<<"doublevar"<<doublevar<<endl;

//Print the sizes of variables

cout<<"The Size of a is "<<sizeof(a)<<endl;
cout<<"The Size of charvar is "<<sizeof(charvar)<<endl;
cout<<"The Size of boolvar is "<<sizeof(boolvar)<<endl;
cout<<"The Sizo of d is "<<sizeof(d)<<endl;
cout<<"The Size of doublevar is "<<sizeof(doublevar)<<endl;

//Return an integer value

return 9;
}

 
