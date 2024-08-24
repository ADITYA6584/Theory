#include <iostream>
using namespace std;


//Upper to lower chat
char upperLower(char c)
{
        if('Z'>=c && 'A'<=c)
        {
        char temp = 'a'-'A'+c;
        cout<<temp;
        return temp;
        }
        else{
            cout<<c;
            return c;
        }
}
int main()
{
    char c[15];
    cout<<"Entre the string: ";
    cin>>c;
    cout<<upperLower(c[15]);
    //Function of length
    int len=0;
    for(int i =0;c[i]!='\0';i++)
    {
        len++;
    }
    cout<<"The length of the string is: "<<len<<endl;
    int s=0;
    int end = len-1;
    bool check = false;
    while(s<end)
    {
        if(c[s]==c[end])
        {
            s++;end--;
            check = true;
        }
        else{
            check =false;
            break;
        }
    }
    if (check == true) 
    {
        cout<<"Yes it is a palindrom string:";
    }
    else{
        cout<<"No it is not a palindrom string:";
    }
    cout<<endl;
    
    return 0;
}