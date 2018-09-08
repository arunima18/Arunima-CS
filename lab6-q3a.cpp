/*
(By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
*/

#include<iostream>
using namespace std;

//function that takes two int parameters, finds the maximum, then returns the maximum
//Return value
int max(int a, int b)
{	
	if (a>b){
	return a;
	}
	else {
	return b;
	}

}  	

//main function
int main(){
	//declaration
	int a,b,m;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	//call the previous function
	m=max(a,b);
	//print the maximum value in the terminal
	cout<<m<<endl;
	return 0;
}

