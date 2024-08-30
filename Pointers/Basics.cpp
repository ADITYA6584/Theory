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
    
    /*int *p2;
    cout<<p2<<"  "<<*p2;
    
    int *p1 = 0;
    cout<<*p1;
    cout<<endl;
    */
    //Understanding Question 

    int number = 15;
    int a = number;
    a++; 
    cout<<endl;
    cout<<"Output will be: "<<number;    //Output will be 15
    cout<<endl;

    //Important Question and logic:

    int *p = 0;     //Null Pointer
    int i = 5;

    p = &i;    //tell me the output
    
    cout<<*p<<endl;     //Value of i;
    cout<<p<<endl;      //Address of i

    int x =5;
    int *z = &x;
    *z = *z+1;
    cout<<*z<<endl;
    cout<<x<<endl;

    //Copying the pointer****************************************************************************************
    
    int check = 11;
    int *x1 = &check;

    int *w = x1;
    
    cout<<*w <<" "<<*x1<<endl;
    cout<<w <<" "<<x1<<endl;
    cout<<"******************************************************************"<<endl;
    //Important Logics
    //Since taking the example of x1

    (*x1)++;      //12;
    cout<<*x1<<endl;
    cout<<"Address of X1: "<<x1<<endl;
    
    //But if 
    x1 = x1+1;
    cout<<"New address: "<<x1;


    return 0;
}