#include <iostream>
using namespace std;

void revesestring(char stringarray[])
{
    int len=0;
    for(int j =0;stringarray[j]!='\0';j++)
    {
        len++;
    }
    int p =len-1;
    for(int i = 0;i<p;i++)
    {
        swap(stringarray[i],stringarray[p]);
        p--;
    }
    cout<<stringarray;
}
int main()
{
    char stringarray[15];
    cout<<"Entre your string: ";
    cin>>stringarray;
    cout<<"Reverse string is: ";
    revesestring(stringarray);
    return 0;
}