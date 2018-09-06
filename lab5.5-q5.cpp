*/         *
          ***
         *****
        *******
       *********   */

#include<iostream>
using namespace std;
int main(){
int i,j,k,l,n;
cout<<"Enter any Number"<<endl;
cin>>n;
	for (i=0; i<n; i++){
		for(j=0; j<(n-(i+1)); j++){
                cout<<" ";
		}	      

                for(k=0; k<(2*i+1); k++){
                cout<<"*";
                }
                for (l=0; l<(n-(i+1)); l++){
                cout<<" ";
                }
        cout<<endl;
        }
return 0;
}

