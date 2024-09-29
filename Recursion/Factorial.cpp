#include <iostream>
using namespace std;

int factorial(int num)
{
    //Base case
    if(num==0) return 1;
    //Recursion
    int smallProblem =factorial(num-1);
    //Processing
    int ans = num*smallProblem;     //Recursive relation
    return ans;
}
int main()
{
    int num;
    cout<<"Entre the number for factorial ";
    cin>>num;
    int ans = factorial(num);
    cout<<"Factorial of num is: "<<ans;
    return 0;
}