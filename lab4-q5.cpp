//Define Library
#include<iostream>

using namespace std;

//write main function
int main(){

//Declare datatypes
float a,b,c,d,e,total,avg,percent;  //a-Physics,b-Maths,c-CS,d-English,e-Biology

//Ask marks from user and input values from terminal
cout<<"Marks secured in Physics= "<<endl;
cin>>a;
cout<<"Marks secured in Maths= "<<endl;
cin>>b;
cout<<"Marks secured in Computer Science= "<<endl;
cin>>c;
cout<<"Marks secured in English is= "<<endl;
cin>>d;
cout<<"Marks secured in Biology is= "<<endl;
cin>>e;

//Calculate values
total=(a+b+c+d+e);
avg=((a+b+c+d+e)/5);
percent=(((a+b+c+d+e)/500)*100);

//Print values
cout<<"The total marks secured out of 500 is "<<total<<endl;
cout<<"The average marks secured is "<<avg<<endl;
cout<<"The percentage secured is "<<percent<<"%"<<endl;

//Return integer
return 2;

}
