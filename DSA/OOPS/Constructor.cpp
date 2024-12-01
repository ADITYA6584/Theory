#include <iostream>
using namespace std;

//Creating a class
class Vehicle
{
    
    public:

    //Static member:
    static int time;

    //Creating your own constructor
    //Default Constructor
    Vehicle()
    {
        cout<<"Default constructor is called:"<<endl;
    }

    public:
    //Its properties
    string vehicle_name;
    string engine;
    int no_wheel;
    string usage;
    
    //Static funtion
    static int staticfuntion()
    {
        cout<<"Using static funtion: "<<time<<endl;
        // cout<<name<<endl;        //this will give error becz name is not a static member:
        return time;
    }


    //Destructor
    ~Vehicle()
    {
        cout<<endl;
        cout<<"Destructor is called: "<<endl;
    }
};


//Initilise static variable of class
    int Vehicle :: time = 10;
int main()
{
    //Print static value:
    cout<<Vehicle::time<<endl;

    //Using static function:
    Vehicle::staticfuntion();

    //Creating an object
    //Statically
    Vehicle car;                    //Here Default constructor is called
    
    //U can also use object to print static variable but it is not a good habit:
    cout<<car.time<<endl;

    //Properties:
    car.vehicle_name = "Scorpio";
    car.engine = "V8";
    car.no_wheel = 4;
    car.usage = "Personal";

    //Creating an object
    //Dynamically
    Vehicle *van = new Vehicle;         //Here Default constructor is called


    return 0;
}