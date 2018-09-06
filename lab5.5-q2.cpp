/* *
   **
   ***
   ****
   ***** 
*/
#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"Enter a Number"<<endl;
cin>>n;
      for (i=0; i<n; i++){
          //Print some stars
          for (j=0; j<(i+1); j++){
          cout<<"*";
    
          }
      cout<<endl;
      }
return 0;
}

