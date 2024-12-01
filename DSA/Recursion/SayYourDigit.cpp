// In this question bhaiya has given me number and we need to use Recursion

//Example"
/*
Input -> 412
Output -> Four One Two
*/

#include <iostream>
using namespace std;
//Function
void SayDigit(string arr[],int num)
{
    //Base case
    if(num==0)   return ;
    
    int digit = num%10;
    num = num/10;
    //Recursion Relation
    SayDigit(arr,num);

    //Processing
    cout<<arr[digit]<<" ";
}

int main()
{
    int num;
    cout<<"Entre the number :";
    cin>>num;
    string arr[10] = {"Zero","One","Two", "Three", "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine"};
    SayDigit(arr,num);
    return 0;
}