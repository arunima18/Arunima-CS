*/ *****
   *   *
   *   *
   *   *
   *****  */

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter any number"<<endl;
cin>>n;

	for (int i=0; i<n; i++){
                
        	if (i == 0 || i == n-1){
		        //cout<<"*****"<<endl;
			for (int j=0; j<n; j++){
			cout<<"*";
			}
		}
                else {
		        //Print some stars
		        
		        cout<<"*";
		        
		        for (int j=0; j<(n-2); j++){
		        cout<<" ";
		        }
		        
		        cout<<"*";
		     }  
	
       	cout<<endl;  
	}
return 0;
}
                
	    
    
