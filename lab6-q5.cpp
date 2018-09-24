/* Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
*/

#include<iostream>
using namespace std;
//write function for sum
int sum(int a,int b){
	int c;
	c=a+b;
	return c;
	}
//write function to find maximum
int maximum(int a,int b){
int c;
	if (a>b){
	c=a;
	}
	else{
	c=b;
	}
return c;
}
//write function to find minimum		
int minimum(int a, int b){
int c;
	if (a<b){
	c=a;
	}
	else{
	c=b;
	}
return c;
}
//write main function
int main(){
	int a,b,c,r,m;
	//ask two variables from user
	cout<<"Enter two variables"<<endl;
	cin>>a>>b;
	//ask function from user
	cout<<"What would you like me to do? 1.Add 2.Find maximum 3.Find minimum"<<endl;
	cin>>r;      
	
	//apply condition
		if (r==1){
		m=sum(a,b);	
		cout<<"The sum of the two numbers is "<<m<<endl;
		}
		else if (r==2){
		m=maximum(a,b);
		cout<<"The maximum of the two numbers is "<<m<<endl;
		}
		else if (r==3){
		m=minimum(a,b);
		cout<<"The minimum of the two numbers is "<<m<<endl;
		}
return 0;
}
	



