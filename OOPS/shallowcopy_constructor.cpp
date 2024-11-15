#include <iostream>
#include <cstring>
using namespace std;

//Going to see the shallow copy problem in constructor:
class Electronic
{
    public:
    //Properties
    //Pointer name (Dynamic allocation)
    char *name =new char[100];
    string type;
    double power;
    int trending;

    //Shallow copy or u can leave this and let it be default constructor:

    //Setname
    void setname(char name[])
    {
        strcpy(this->name,name); 
    }
    void getdetails()
    {
        cout<<"Name "<<this->name<<endl;
        cout<<"Type "<<this->type<<endl;
        cout<<"Power "<<this->power<<endl;
        cout<<"Trending "<<this->trending<<endl;
        return ;
    }

    //Destructor
    ~Electronic()
    {
        cout<<"Destructor is called: "<<endl;
    }
};


int main()
{
    Electronic apple;
    apple.type = "Highpower";
    apple.power = 10.15;
    apple.trending = 2;
    apple.setname("Ipad");
    //Before change:
    apple.getdetails();

    //Copying the object
    Electronic oneplus = apple;
    apple.name[0] = 'G';
    cout<<endl;
    //Now checking the shallow copy:
    //After change

    //this both have will get the same changes 
    //Because of shallow copy
    
    /*
    I made the change in the name of apple but after making change in the 1st name this automatically 
    make changes in the copied object i.e Oneplus;
    This is Shallow Copy:
    */

    apple.getdetails();
    cout<<endl;
    oneplus.getdetails();

    return 0;
}