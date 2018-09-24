/* The function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.
*/

#include<iostream>
using namespace std;
//write function to add numbers
void addNum(int a,int b, int &c){
	c=a+b;
}
//write main function
int main(){
	int a,b,z;
	//Ask two values from user
	cout<<"Enter any two numbers"<<endl;
	cin>>a>>b;
	//call the function
	addNum(a,b,z);
	//Print the sum of numbers
	cout<<"the sum of the two numbers is "<<z<<endl;
return 0;
}
