#include <iostream>
using namespace std;
int main()
{
    //Going to create 2D array using Dynamic Programming
    // int n;
    // cout<<"Entre the value of length"<<endl;
    // //this create a 1D array
    // int *arr = new int[n];

    //Now for 2D array
    int num;
    cout<<"Entre the number of size of 2D array of n*n:";
    cin>>num;

    int** arr = new int* [num];

    for(int i=0;i<num;i++)
    {
        arr[i] = new int[num];
    }
    //Done creation of 2D array

    //Taking Input
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"****************************************"<<endl;
    cout<<"Showing the 2D array:"<<endl;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
