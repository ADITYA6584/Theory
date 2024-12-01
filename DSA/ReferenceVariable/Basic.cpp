#include <iostream>
using namespace std;

//Update function
int Update(int x)
{
    x++;    //Here x is a different memory location due to which no changes will be applicable to num
    return x;
}
int Update2(int &x)
{
    x++;    //Here x is a different memory location due to which no changes will be applicable to num
    return x;
}

int main()
{
    //How to create a reference variable
    int i = 5;
    int &j = i;
    cout<<i<<endl;
    i++;
    cout<<j<<endl;      //Same 6
    cout<<i<<endl;      //Same 6

    //Example of pass by value
    int num = 10;

    cout<<"Before: "<<num<<endl;
    Update(num);
    cout<<"After: "<<num<<endl;     //No change because of Pass by value

    //But if i make a new funtion and pass reference variable then:
    Update2(num);
    cout<<"After passing new funtion and pass by reference: "<<endl;
    cout<<num<<endl;        //Change will reflect i.e = 11; 


    /********************************************************************* */
    cout<<"Creating a address in Heap"<<endl;
    new char;       //This will be address
    cout<<new char<<endl; //But this address will keep on changing i.e Dynamic

    //Use of pointer to access address in pointer
    cout<<"Using pointer: "<<endl;
    char *ptr = new char;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    //Creating for Number
    int *ptr2 = new int;
    cout<<"Entre value: ";
    cin>>*ptr2;
    cout<<*ptr2<<endl;


    return 0;
}