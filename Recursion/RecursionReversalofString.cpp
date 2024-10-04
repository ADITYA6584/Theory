//THis is a question which is beign solved during lecture in Love Babbar Video

/*
In this question we are Required to Reverse the string 
But using recursion
*/

//Make Recursion Tree for proper understanding


#include <iostream>
using namespace std;

//Recursion funtion ---->Using 2 Pointer
string reverse(string &arr,int start,int end)
{
    //Base Case
    if(start>end)
    {
        return arr;
    }

    
    //Processing
    swap(arr[start],arr[end]);
    start++;end--;

    //Recursion Relation
    return reverse(arr,start,end);

}
//Recursion funtion ---->Using 1 Pointer
int main()
{
    string arr;
    cout<<"Enter the string u want to reverse:";
    cin>>arr;
    int size = arr.length();
    reverse(arr,0,size-1);
    cout<<"Reverse String is: "<<arr; 
    return 0;
}