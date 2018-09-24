#include<iostream>
using namespace std;

//Define a function that takes in two integer parametres and finds the maximum using reference
void max(int a, int b, int &c){
	
	if (a>b){
	c=a;
	}
	else {
	c=b;
	}
}
//write main function
int main(){
	int a,b,mxm;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	//Call previous function
	max(a,b,mxm);
	//print the maximum
	cout<<"The maximum of the two numbers is "<<mxm<<endl;
return 0;
}
