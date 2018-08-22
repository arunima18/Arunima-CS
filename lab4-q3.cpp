//Define library
#include<iostream>

using namespace std;

//Write main function
int main(){

//Declare datatypes
float day;
float year,week;

//Ask value from user
cout<<"Input the number of days"<<endl;

//Input value from terminal
cin>>day;

//Calculate no. of years
year=day/365;

//Print years
cout<<"The number of years is "<<year<<endl;

//Calculate no. of weeks
week=day/7;

//Print weeks
cout<<"The number of weeks is "<<week<<endl;

//Return integer
return 1;

}

