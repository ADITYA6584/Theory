#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"Entre the no of row:";
    cin>>r;
    cout<<endl;
    cout<<"Entre the no of column:";
    cin>>c;

    // one way to initialize 
    int arr [r][c];
    
    //2nd Way to initialize
    int arr2 [3][3] = {{1,11,111} ,{2,22,222},{3,33,333}};

    //To take input
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Entre the row:"<<i+1<<"And column: "<<j+1;
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing 2nd matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}