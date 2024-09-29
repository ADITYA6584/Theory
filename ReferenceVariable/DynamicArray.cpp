#include <iostream>
using namespace std;

//Creating getsum funtion
int getsum(int *p,int num, int &sum)
{
    for(int i =0;i<num;i++)
    {
        sum = sum+p[i];
    }
    return sum;
}
int main()
{
    int num;
    cin>>num;

    //Variable size array using dynamic memory allocation
    int *ptr = new int[num];
    for(int i =0;i<num;i++)
    {
        cin>> ptr[i];
    }
    cout<<endl;
    for(int i =0;i<num;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
    int ans=0;
    getsum(ptr,num,ans);
    cout<<"Sum of the array is: "<<ans;

}