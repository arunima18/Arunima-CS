/*
(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
*/

#include<iostream>
using namespace std;

int minimum(int a, int b){
	
	if(a>b){
	return b;
	}
	else{
	return a;
	}
}

int main(){	
	int a,b,c;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	c=minimum(a,b);
	cout<<c<<endl;
	return 0;
}
	
