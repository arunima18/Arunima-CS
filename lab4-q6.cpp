//Define Library
#include<iostream>

using namespace std;
//Write main function
int main(){

//Declare datatypes
float P,T,R,S;  //P-Principle,T-time in years,R-rate of interest

//Ask data from user and input value from terminal
cout<<"Enter the Principle amount"<<endl;
cin>>P;
cout<<"Enter the Rate of Interest(in % per annum)"<<endl;
cin>>R;
cout<<"Enter time period(in years) for which you want to calculate Interest"<<endl;
cin>>T;

//Calculate interest
S=(P*(1.0+R*T));

//Print answer
cout<<"The amount of Simple Interest over a period of "<<T<<"years is "<<S<<endl;

//Return integer
return 9;

}
 
