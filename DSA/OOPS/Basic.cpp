#include <iostream>
using namespace std;

/*
Even we can use the same class throughout any program file by using the file name as a
header file like #include "name.cpp".
*/

// Creating Class
class Hero
{
private:
    // properties
    // by default it is a private i.e cannot access by the main funtion
    char name[90];
    int health;

public:
    // Since these are private instances so can only be accessed in a class:
    
    //Getter and setter
    void sethealth(int h)
    {
        health = h;
        cout << "Health of the hero is: " << health << endl;
        return;
    }

    void gethealth()
    {
        cout<<"The health is :"<<health<<endl;
        return ;
    }

    // Public instances
public:
    int age = 20;
};

class emptyclass
{
    // No property
    // And if i create a instsance of this class in main still a 1 byte memory will be allocated in it
};

int main()
{
    Hero aditya;     // object of class hero
    Hero check1; // object of class hero
    
    cout << sizeof(aditya) << endl;
    cout << "Cheking " << sizeof(check1) << endl;

    // Now trying to access private
    cout << "Value of age is: " << aditya.age << endl;

    cout << endl
         << endl;
    aditya.sethealth(50);

    aditya.gethealth();
    cout<<endl;
    // Using empty class with no object in it:
    // Creating instance
    emptyclass e1;
    cout << "Now checking the size of empth class instance: " << sizeof(e1) << endl;
    return 0;
}