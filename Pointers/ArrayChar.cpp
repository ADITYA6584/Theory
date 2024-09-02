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
    cout<<"**************************************"<<endl;

    // Key differences between the array and char array
    char ch[5] = "abcd";
    cout<<arr<<endl;
    cout<<ch<<endl;
    
    cout<<"**************************************"<<endl;
    //Now with pointer
    int *t = &arr[0];
    char *y = &ch[0];

    cout<<*t<<endl;
    cout<<*y<<endl;
    //Key difference 
    cout<<t<<endl;  //Address of a[0]
    cout<<y<<endl;  //Whole value will get print until it will get '/0'

    char c = 'a';
    char *u= &c;
    cout<<*u<<"  "<<u<<endl;   //It will print anything untill it will get null char in the memory box
    cout<<"End"<<endl;

    return 0;
}