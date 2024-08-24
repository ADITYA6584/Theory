#include <vector>
#include <iostream>

using namespace std;

void ans(int v[],int n)
{
    int i=0;
    for(int j=0;j<n;j++)
    {
        int x;
        cout<<"Entre your number:";
        cin>>x;
        if(x!=0)
        {
            v[i]=x;
            i++;
        }
    }
    for(int p=0;p<n;p++)
    {
        cout<<v[p];
    }
}


int main() {
    int n;
    cout<<"Entre the size of packet:";
    cin>>n;
    int  v[n] ={0};
    ans(v,n);
    return 0;
}