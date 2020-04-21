#ifndef Student_cpp
#define Student_cpp
#include "iostream"
#include "Door.cpp"
#include "Room.cpp"
using namespace std;

class Student
{
    public:
    Student(Door* dr)
    {
        this->currDoor = dr;
        this->currRoom = NULL;
    }
    Door* currDoor;
    Room* currRoom;
    void enterRoom()
    {
        this->currRoom = currDoor->getRoom();
        this->currDoor = NULL;
    }

    void chooseDoor(int i)
    {
        
        this->currDoor = this->currRoom->getDoor(i);
    }
    void travel()
    {
        string a;
        int i;
        while(true)
        {
            currDoor->displayRoom();
            cout << "Enter " << this->currDoor->displayRoom() << "?" << "\n";
            cin >> a;
            if(a == "yes")
            {
                this->enterRoom();
            }
            cout << "You are in the " <<this->currRoom->getName()<< "\n";
            cout << "Chose a door"<< "\n";
            this->currRoom->displayDoors();
            cin >> i;
            this->chooseDoor(i);
        }
    }


    private:


};