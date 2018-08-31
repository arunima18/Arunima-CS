//To find whether a character is alphabet or not
#include<iostream>
using namespace std;
int main(){
     //Declare datatypes
     char a;
     int b;
     //Ask a character from user
     cout<<"Enter any character"<<endl;
     cin>>a;
     //Typecasting
     b=int(a);
     //Write the condition
     if ((b>64 && b<91) || (b>96&& b<123)){
     cout<<"Alphabet"<<endl;
     }
     else{
     cout<<"Not an alphabet"<<endl;
     }
return 1;
}
     
