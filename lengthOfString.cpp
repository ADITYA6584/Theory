#include <iostream>
using namespace std;

int lengthofstring(char arr[])
{
    int len=0;
    for(int i =0;arr[i]!='\0';i++)
    {
        len++;
    }
    return len;
}

int main()
{
    char arr[15];
    cout<<"Entre the name: "<<endl;
    cin>>arr;
    cout<<"the ans is: ";
    cout<<arr;
    int ans = lengthofstring(arr);
    cout<<"Length of the string is: "<<ans;
    return 0;
}