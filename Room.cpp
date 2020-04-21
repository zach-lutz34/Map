#ifndef Room_cpp
#define Room_cpp
#include "iostream"
#include "Door.cpp"
using namespace std;

class Room
{

    public:
    Room::Room(Door* dr, string n)
    {
        this->door1 = dr;
        this->name = n;
    }

    void addDoor(Door* dr)
    {
        this->door2 = dr;
    }

    void displayDoors()
    {
        cout << door1->getName() << "\n";
        if(this->door2)
        {
            cout << door2->getName();
        }
    }

    string getName()
    {
        return this->name;
    }

    Door* getDoor(int i)
    {
        if(i = 1)
        {
            return this->door1;
        }
        else
        {
            return this->door2;
        }
    }

    private:
    Door* door1;
    Door* door2;
    string n;
};