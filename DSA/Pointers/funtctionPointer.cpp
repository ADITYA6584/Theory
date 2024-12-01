#include <iostream>
using namespace std;

void printfun(int *p)
{
    cout<<*p<<endl;
    cout<<p<<endl;
}

void update(int *p)
{
    *p = *p + 1;    // this will work but p = p+1 will not work in the main funtion because when we pass any value from the funtion
                    // we are actually passing pass by value or the copy of that value i.e in this case is ptr and not *pt
}
int main()
{
    int arr[5] = {1,5,8,6,3};
    int *p = arr;
    //calling function
    cout<<"Before: ";
    printfun(p);
    cout<<"After update: "<<endl;
    update(p);
    cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}