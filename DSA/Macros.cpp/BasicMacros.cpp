#include <iostream>
using namespace std;
/*
Macros is just a piece of code that is used to replace a repeating value in code with macros.

This is the way to make a macro
1. #define name value 

*****Features********************
Its value will not be modified in the code
It doesn't take extra storage in the code.
As well as it doesn't affect the performance of the code

*/
//Example:

#define pi 3.14     //Ist macro

#define rectangle(a,b) (a*b)    //2nd macros

#define minimum(a,b) ((a<b) ? a:b)  //3rd macros

int main()
{
    int r =5;
    int area = pi*r*r;
    cout<<"Area of the square:"<<area<<endl;
cout<<"*****************************************************"<<endl;
    int length = 10 , breadth = 20 , recArea;
    recArea = rectangle(length,breadth);
    cout<<recArea<<endl;

    cout<<"*****************************************************"<<endl;
    int ans = minimum(length,breadth);
    cout<<"Minimum value out of length and breadth: "<<ans<<endl;
    
    return 0;
}