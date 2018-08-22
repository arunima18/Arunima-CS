//Define Library
#include<iostream>

using namespace std;

//Write main function
int main()
{

//Define datatypes
 float cen;
 float met;
 float km;

//Ask length from user
cout<<"What is the length in centimeter? "<<endl;


//Input value from terminal
cin>>cen;

//Assign value to variable
met=(cen/100);
km=(cen/100000);

//Print result
cout<<"The length in meter is equal to "<<met<<endl;
cout<<"The length in kilometer is equal to "<<km<<endl;

//Return integer
return 3;

}

