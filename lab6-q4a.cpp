/*
(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
*/

#include<iostream>
using namespace std;
//write function that finds the minimum
int minimum(int a, int b){
	
	if(a>b){
	return b;
	}
	else{
	return a;
	}
}
//write main function
int main(){	
	int a,b,c;
	//ask values from user
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	//call the function
	c=minimum(a,b);
	//print the minimum
	cout<<"The minimum of the two numbers is "<<c<<endl;
return 0;
}

