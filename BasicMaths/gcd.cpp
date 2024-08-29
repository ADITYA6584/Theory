#include <iostream>

using namespace std;

//GCD function
int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    
    else
    {
        while(a!=b)
        {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
        }
        cout<<b;
        return b;
    }
}


int main()
{
    int a,b;
    cout<<"Entre the value of a and b:";
    cin>>a>>b;
    gcd(a,b);
    return 0;
}