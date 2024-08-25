#include <iostream>
#include <limits.h>

using namespace std;

void rowsum(int arr[][3])
{
    int total =0;
    for(int i =0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            total = total + arr[i][j];
        }
        cout<<"Sum of "<<i<<": "<<total;
        cout<<endl;
        total =0;
    }
}

//TO find the largest sum row 
int largestsum(int arr[][3])
{
    int maxi = INT_MIN;
    int maxiIndex = -1;
    int total =0;
    for(int i =0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            total = total + arr[i][j];
        }
        if(maxi<total)
        {
            maxi =total;
            maxiIndex = i;
        }
        total =0;
    }
    return maxiIndex;
}

int main()
{
    int arr[3][3] = {{1,222,3},{4,5,6},{7,8,9}};
    rowsum(arr);
    int ans =largestsum(arr);
    cout<<"Largest Sum Index is:"<<ans;
    return 0;
}