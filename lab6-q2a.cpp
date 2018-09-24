/* (By Value) Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/

#include<iostream>
using namespace std;
//Write function to add two numbers
int addNum(int a,int b){
	int c;
	c=a+b;
	return c;
}
//Write main function
int main(){
	int a,b,z;
	//Ask two numbers from user
	cout<<"Enter any two numbers"<<endl;
	cin>>a>>b;
	//Call the function to add
	z=addNum(a,b);
	//Print the sum
	cout<<"The sum of the two numbers is "<<z<<endl;
return 0;
}

