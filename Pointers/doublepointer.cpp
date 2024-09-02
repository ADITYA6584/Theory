#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int * p = & a;      //first pointer
    int ** q = & p;     //second pointer or double pointer


    // address of a */
    cout << & a << endl;
    cout << p << endl;
    cout << * q << endl;
     
    //address of p 
    cout << & p << endl;
    cout << q << endl;


    // value of a 
    cout << a << endl;
    cout << * p << endl;
    cout << ** q << endl;

    cout <<"**************************************************************************"<<endl;

    //Printing the value of a;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;

    cout<<"***************************************************************************"<<endl;
    cout<<"Trying to print the value of address of a"<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;

    cout<<"***************************************************************************"<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;

    return 0;    
}
