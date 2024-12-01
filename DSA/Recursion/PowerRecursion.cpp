#include <iostream>
using namespace std;

//Function
int power(int num,int pow)
{
    //Base condition
    if(pow==0)
    {
        return 1;
    }

    //recursion
    int ans = num*power(num,pow-1);
    return ans;
}

int main()
{
    int num,pow;
    cout<<"Entre the number u want for base: ";
    cin>>num;
    cout<<"Entre the number u want for Power: ";
    cin>>pow;

    int ans = power(num,pow);
    cout<<"Final answer: "<<ans<<endl;
    return 0;
}