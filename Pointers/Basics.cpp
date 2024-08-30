#include <iostream>
using namespace std;

int main()
{   
    int num =5;
    int *ptr = &num;
    cout<<&num<<endl;   //Address
    cout<<ptr;
    cout<<endl;

    //Size check
    double num2 = 10;
    double *pointer = &num2;
    cout<<"Size of :"<<sizeof(num2)<<endl;
    cout<<"Size of pointer: "<<sizeof(*pointer)<<endl;
    cout<<"Size of only ptr/Pointer: "<<sizeof(pointer)<<endl;
    cout<<pointer<<endl;


    //Null Pointer ---> This is a bad practice to initialize a null pointer without a value
    int *p2;
    cout<<p2<<"  "<<*p2;

    int *p1 = 0;
    cout<<*p1;
    return 0;
}