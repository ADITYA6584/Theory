//THis is a question which is beign solved during lecture in Love Babbar Video

/*
In this question we are Required to Check the parilndrom 
But using recursion
*/

//Make Recursion Tree for proper understanding


#include <iostream>
using namespace std;

//Recursion funtion ---->Using 2 Pointer
bool Parindrom(string &arr,int start,int end)
{
    //Base Case
    if(start>end)
    {
        return true;
    }
    //If it is not a parindrom
    if(arr[start]!=arr[end])
    {
        return false;
    }
    
    //Processing
    if(arr[start]==arr[end])
    {
        start++;end--;
    }
    //Recursion Relation
    return Parindrom(arr,start,end);

}

int main()
{
    string arr;
    cout<<"Enter the string u want to reverse:";
    cin>>arr;
    int size = arr.length();
    Parindrom(arr,0,size-1);
    cout<<"String is Parilndrom or not: "<<Parindrom(arr,0,size-1); 
    return 0;
}