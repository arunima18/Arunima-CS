/*      *****
       *****
      *****
     *****  
    *****   */
#include<iostream>
using namespace std;
int main(){
int i,j,k,l,n;
cout<<"Enter a number"<<endl;
cin>>n;
   for (i=0; i<n; i++){
      //Print space
      for (j=0; j<(n-(i+1)); j++){
      cout<<" ";
      }
      
      //Print stars
      for (k=0; k<n; k++){
      cout<<"*";
      }
       
      //Print space
      for (l=0; l<i; l++){
      cout<<" ";
      }
     
   cout<<endl;
   }
return 0;
}
