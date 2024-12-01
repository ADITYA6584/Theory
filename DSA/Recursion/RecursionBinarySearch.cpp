//THis is a question which is beign solved during lecture in Love Babbar Video

/*
In this question we are Required to find the number in the array ---> Binaray Search
But using recursion
*/

//Binaray Search

//Make Recursion Tree for proper understanding

#include <iostream> 
using namespace std;

bool Find(int arr[],int start,int end,int target)
{
    int mid = start +(end-start)/2;
    //Base Case

    //Not present case
    if(start>end)                                 
    {
        cout<<endl<<"Not Fount"<<endl; 
        return false;
    }

    //Element Present
    if(arr[mid]==target)
    {
        return true;
    }

    //Recursion Relation
    else if(arr[mid]>target)
    {
        return Find(arr,start,mid-1,target);
    }
    else
    {
        return Find(arr,mid+1,end,target);
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
    bool ans = Find(arr,0,size-1,target);
    cout<<"Target is present :"<<ans;
    return 0;
}