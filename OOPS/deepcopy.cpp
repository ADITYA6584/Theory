//Here i m going to try Deep Copy Constructor:

#include <iostream>
#include <cstring>
using namespace std;

//Class
//Going to show Deep copy :
/*
In this we will create a copy of the pointer so that when we copy 
object->2 then the value will get copy from the new created pointer 
And not the pointer of the object->1
*/

class Electronic
{
    public:
    //Properties
    //Pointer name (Dynamic allocation)
    char *name =new char[100];
    string type;
    double power;
    int trending;

    //Default constructor
    Electronic()
    {
        cout<<"Default constructor is called:"<<endl;
    }
    //Setname
    void setname(char name[])
    {
        strcpy(this->name,name);
        
    }

    //Deep Copy constructor:
    Electronic(Electronic &h)
    {
        //Copy other properties:
        this->power = h.power;
        this->trending = h.trending;
        this->type = h.type;
        
        char *copyname = new char[100];
        strcpy(copyname,h.name);
        //Creating a new array
        strcpy(this->name , copyname);
    }

    void getdetails()
    {
        cout<<"Name "<<this->name<<endl;
        cout<<"Type "<<this->type<<endl;
        cout<<"Power "<<this->power<<endl;
        cout<<"Trending "<<this->trending<<endl;
        return ;
    }
};


int main()
{
    Electronic apple;
    apple.setname("Ipad");
    apple.power = 9;
    apple.trending = 1;
    apple.type = "High";

    apple.getdetails();

    cout<<endl;
    //Copy 
    Electronic Android(apple);
    Android.getdetails();
    
    cout<<endl;
    //Making other changes in the name:
    apple.name[0] = 'G';

    apple.getdetails();
    cout<<endl;
    Android.getdetails();

    //Making big change in the name of 1st
    apple.setname("Iphone");

    cout<<endl;
    apple.getdetails();
    cout<<endl;
    Android.getdetails();
    return 0;
}