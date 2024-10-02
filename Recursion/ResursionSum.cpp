//THis is a question which is beign solved during lecture in Love Babbar Video

/*
In this question we are Required to find the sum of the array
But using recursion
*/

//Make Recursion Tree for proper understanding

#include <iostream>
using namespace std;

int sum(int arr[],int size)
{
    //Base case
    if(size==0)
    {
        return 0;
    }
    
    int ans;
    //Resursion relation
    ans = sum(arr+1,size-1);

    //Processing
    int fianls = arr[0]+ans;
    return fianls;
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
    int ans = sum(arr,size);
    cout<<"Sum of the array number is:"<<ans;
    return 0;
}