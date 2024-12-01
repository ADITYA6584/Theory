/*
A shallow copy simply copies the values of data members from one object to another. 
If the class has pointers as data members, 
a shallow copy will copy only the pointers' values
(i.e., the memory addresses) rather than the actual data they point to.
*/

#include <iostream>
using namespace std;

///creating a class
class Hero
{
    //Copy constructor can be used inbuit if not created
    //Copy constructor do shallow copy

    public:
    int health;
    int hero_no;
    string name;

    //Will create our own copy constructor
    Hero(Hero &temp)
    {
        cout<<"Copy constructor is called"<<endl;
        this->health = temp.health;
        this->hero_no = temp.hero_no;
        this->name = temp.name;
    }


    //parametrised constructor
    Hero(int health , int hero_no , string name)
    {
        this->health = health;
        this->hero_no = hero_no;
        this->name = name; 
    }

    //Get details
    void getdetail()
    {
        cout<<"Health :"<<health<<endl;
        cout<<"Hero name :"<<name<<endl;
        cout<<"Hero Number :"<<hero_no<<endl;
    }

    //Destructor
    ~Hero()
    {
        cout<<"Destructor is called: "<<endl;
    }
};

int main()
{
    Hero Adi(80 , 1 , "Aditya");
    Adi.getdetail();

    //copy constructor
    Hero Ramesh(Adi);
    Ramesh.getdetail();

    //shallow copy
    

/*
    Hero aditya;
    aditya.health = 100;
    aditya.hero_no = 1;
    aditya.name = "Adi";

    //Now trying to call copy constructor
    Hero Ramesh(aditya);
    Ramesh.getdetail();

*/
    return 0;
}