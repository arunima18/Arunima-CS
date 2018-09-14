#include<iostream>
using namespace std;
//By Reference
//Define a function that takes in two integer parametres and finds the maximum
void maximum(int a, int b, int &c){
	
	if (a>b){
	c=a;
	}
	else {
	c=b;
	}
                                  }
int main(){
	int a,b,mxm;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	maximum(a,b,mxm);
	cout<<mxm<<endl;
	return 0;
}
