#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {2,5,8,6,3};
    int *p = &arr[0];
    cout<<"Address of p: "<<&p<<endl;
    cout<<"value of Pointer: "<<*p<<endl;
    cout<<"Pointer: "<<p<<endl;

    //Now pointer will show the next value in array; i.e arr[1]
    p = p+1;    
    cout<<"New value of Pointer: "<<*p<<endl;
    cout<<"New Pointer: "<<p<<endl;
    cout<<"Address of Array 1 : "<<&arr[1]<<endl;
    return 0;
}