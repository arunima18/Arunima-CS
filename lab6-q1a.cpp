/* Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
*/

#include<iostream>
using namespace std;
//write function to ask three values from user
int enterValue(int unitCst, int units, int taxRt){
	cout<<"Enter the unit cost of the product"<<endl;
	cin>>unitCst;
	cout<<"Enter the number of units"<<endl;
	cin>>units;
	cout<<"Enter the tax rate"<<endl;
	cin>>taxRt;
	
	return unitCst;
	return units;
	return taxRt;
}
//Main function
int main(){
	int unitCst,units,taxRt;
	//Call the previous function
	enterValue(unitCst,units,taxRt);
return 0;
}
