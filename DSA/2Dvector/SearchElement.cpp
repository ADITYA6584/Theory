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

    //Target
    int target;
    cout<<"Entre the element you wanna search:";
    cin>>target;

    
    int arr [r][c];
    int ansRow,ansCol;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Entre the element: ";
            cin>>arr[i][j];
            if(arr[i][j]==target)
            {
                ansRow = i;
                ansCol = j;
            }
        }
        cout<<endl;
    }
    cout<<"Yes the element is present at:"<<ansRow<<" & "<<ansCol;
    // it can be optimized

    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j,c;j++)
    //     {
    //         if(arr[i][j]==target)
    //         {
    //             ansRow = i;
    //             ansCol = c;
    //         }
    //     }
    //     cout<<endl;
    // }
    return 0;
}