//Print all ASCII characters with their values
#include<iostream>
using namespace std;
int main(){
//Declare datatypes
int a;
      //Introduce the loop
      while (a>=0 && a<128){
      cout<<a<<"------------->"<<char(a)<<endl;
      a++;
      }
return 0;
}

