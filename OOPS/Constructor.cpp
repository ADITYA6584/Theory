#include <iostream>
using namespace std;

//Creating a class
class Vehicle
{
    public:
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
};


int main()
{
    //Creating an object
    //Statically
    Vehicle car;                    //Here Default constructor is called
    car.vehicle_name = "Scorpio";
    car.engine = "V8";
    car.no_wheel = 4;
    car.usage = "Personal";

    //Creating an object
    //Dynamically
    Vehicle *van = new Vehicle;         //Here Default constructor is called


    return 0;
}