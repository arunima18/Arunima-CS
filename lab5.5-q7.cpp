/*  *****
     *   *
      *   *
       *   *
        *****  */
#include<iostream>
using namespace std;
int main(){
int i,j,k,l,m,n,o,p;
cout<<"Enter any number"<<endl;
cin>>n;
	for (i=0; i<n; i++){
		if (i==0 || i==(n-1)){
       			//Print space
			for (j=0; j<i; j++){
			cout<<" ";
			}
			//Print stars
			for (k=0; k<n; k++){
			cout<<"*";
			}
			//Print space
			for (l=0; l<(n-i); l++){
			cout<<" ";
			}
		}
		
		else {
			for (m=0; m<i; m++){
			cout<<" ";
			}
			cout<<"*";
			for (p=0; p<(n-2); p++){
			cout<<" ";
			}
			cout<<"*";
			for (o=0; o<(n-i); o++){
			cout<<" ";
			}
		     }
		cout<<endl;
	}
return 0;
}	 

