//THis is a question which is beign solved during lecture in Love Babbar Video

/*
In this question we are Required to find the number in the array
But using recursion
*/

//Linear Search

//Make Recursion Tree for proper understanding

#include <iostream> 
using namespace std;

//function
bool Find(int arr[],int size,int target)
{
    //Base Case
    if(size==0)
    {
        return false;
    }
    if(arr[0]==target)
    {
        cout<<"Yes"<<endl;
        return true;
    }

    //Recursion relation
    else
    {
       bool ans= Find(arr+1,size-1,target);
       return ans;
    }
}

int main()
{
    int size,target;
    cout<<"Entre the size of Array:";
    cin>>size;
    cout<<"Entre the target"<<endl;
    cin>>target;
    int arr[size];
    cout<<"Entre the number :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    bool ans = Find(arr,size,target);
    cout<<"Target is present :"<<ans;
    return 0;
}