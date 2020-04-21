#ifndef Door_cpp
#define Door_cpp

#include "iostream"
#include "Room.cpp"
using namespace std;

class Door
{
    public:
    Door(string n)
    {
        this->room = new Room(this, n);
        this->name = "Door to " + n;
    }
    string displayRoom()
    {
        return this->room->getName();
    }

    string getName()
    {
        return this->name;
    }
    Room* getRoom()
    {
        return this->room;
    }
    private:
    Room* room;
    string n;
};