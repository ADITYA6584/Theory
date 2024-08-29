#include <iostream>

using namespace std;

//function
bool primeno(int num)
{
    for(int i = 2 ; i<num ; i++)
    {
        if(num%i ==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout<<"Entre the number:";
    cin>>num;
    cout<<"Number is :"<<primeno(num);
    return 0;
}