/* Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
*/

#include<iostream>
using namespace std;
//write function to calculate sales tax
int salesTax(int unitCst, int units, int taxRt){
	int salesTx=unitCst*units*taxRt;
	return salesTx;
	}
//write function to calculate total due amount
int totalDue(int unitCst, int units, int taxRt){
	int z;
	//Call the sales tax function to input the sales tax value
	z=salesTax(unitCst,units,taxRt);
	int totDue=z+(unitCst*units);
	return totDue;
	}
//write main function
int main(){
	int unitCst,units,taxRt,salesTx,totDue,a,b;
	//Ask three values from user
	cout<<"Enter the unit cost of the product"<<endl;
	cin>>unitCst;
	cout<<"Enter the number of units"<<endl;
	cin>>units;
	cout<<"Enter the tax rate"<<endl;
	cin>>taxRt;	
	//call salestax function
	a=salesTax(unitCst,units,taxRt);	
	//print salestax
	cout<<"The Sales Tax amount is "<<a<<endl;
	//call total due function
	b=totalDue(unitCst,units,taxRt);
	//print total due
	cout<<"The Total Due amount is "<<b<<endl;
return 0;
}
