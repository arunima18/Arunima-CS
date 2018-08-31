//Print all alphabets from a to z
#include<iostream>
using namespace std;
int main(){
     //Define datatype
     char i;
     int b;
     //Write the starting value
     i='a';
     //typecast:char type to int type
     //char('a')==int('a');
     b=int('a');
    
     //Define the loop
     while ((b>96) && (b<123)){
     cout<<char(b)<<endl;
     
     //Increment value of b by 1
     b++;
     //end loop
     }
//end main function
return 0;
}
