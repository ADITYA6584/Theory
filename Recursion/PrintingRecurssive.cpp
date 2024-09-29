#include <iostream>
using namespace std;

//Function
void printing (int num)
{
    //Tail Recursion
    /*/Base
    if(num==0) return 0;

    //Processing
    cout<<num<<endl;

    //Recursion relation
    printing(num-1);
    */

   //Head Recursion
    //Base
    if(num==0) return ;

    //Recursion relation
    printing(num-1);

    //Processing
    cout<<num<<endl;

}
int main()
{
    int num;
    cout<<"Entre the number till u want to print"<<endl;
    cin>>num;
    cout<<endl;
    printing(num);
    return 0;
}