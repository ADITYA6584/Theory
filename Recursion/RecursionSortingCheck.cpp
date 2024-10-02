//THis is a question which is beign solved during lecture in Love Babbar Video

/*
In this question we are Required to check that if the given Array is Sorted or not
But using recursion
*/

//Make Recursion Tree for proper understanding

#include <iostream>
using namespace std;

//Recursion
bool checkSorted(int arr[],int size)
{
    //Base case
    if(size ==0 || size==1)
    return true;
    if(arr[0]>arr[1])
    return false;

    //Recursion Relation
    else
    {
        bool ans =checkSorted(arr+1,size-1);
        return ans;
    }
}
int main()
{
    int size;
    cout<<"Entre the size of Array:";
    cin>>size;
    int arr[size];
    cout<<"Entre the number :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is sorted:"<<checkSorted(arr,size);
    return 0;
}