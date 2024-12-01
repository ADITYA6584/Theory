//This is a simple but tricky question so make sure u understand it properly

/*
Based on this logic the question like **Climbing Stair** is same 
*/

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

//FUnction -> 2 Better Time complexity 
int WithoutRecursion(int n)
{
    //Without Recursion
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int first =0;
    int second =1;
    int sum =0;
    if(n>1)
    {
        for(int i=2;i<=n;i++)
        {
            sum = first+second;
            first = second;
            second = sum;
        }
        return sum;
    }
    return 0;
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