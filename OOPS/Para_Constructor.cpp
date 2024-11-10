#include <iostream>
using namespace std;

//Creating Class
class Hero
{
    private:
    int Health;
    int no_power;
    string name;


    public:
    //Parametrised Constructor
    Hero(int health , int power , string supername)
    {
        cout<<"Constructor is called:"<<endl;
        this->Health = health;
        this->no_power = power;
        this->name = supername;
        /*
        U can also do it without this-> pointer if both the passing parameter and the instanc
        of the class has the different names;
        Like in this case you can pass you are passing health and the actuall instance in class hero
        is Health so both the different hence similarly power/no_power && name/supername
        if u try like this 
        */

        // Health = health;
        // no_power = power;
        // name = supername;
        
    }
    
    void getdetail()
    {
        cout<<"Address stored in 'this' keyword: "<<this<<endl;
        cout<<"Name: "<<name <<endl;
        cout<<"Health: "<<Health <<endl;
        cout<<"Number of power: "<<no_power <<endl;
        return ;
    }
};

int main()
{
    Hero Aditya(100 , 5 , "Adi");
    Aditya.getdetail();

    //Address of hero -- object
    cout<<"Address of Aditya object: "<<&Aditya<<endl<<endl;

    Hero Champak(50 , 1 , "champak");
    Champak.getdetail();
    cout<<"Address of Aditya object: "<<&Champak<<endl;


    cout<<endl;
    Aditya.getdetail();     //Hence every object has its own this pointer
    return 0;
}