/*  Write a program with a function that takes two int parameters, finds the min. the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that. */

#include<iostream>
using namespace std;
//write function to find minimum
void minimum(int a, int b, int &c){
	if (a>b){
	c=b;
	
	}	
	else{
	c=a;
	}
}
//write main function

int main(){
	int a,b,mini;
	//Ask values from user
	cout<<"Enter numbers"<<endl;
	cin>>a>>b;
	//Call the function
	minimum(a,b,mini);
	//Print minimum
	cout<<"The minimum of the two numbers is "<<mini<<endl;
return 0;
}


