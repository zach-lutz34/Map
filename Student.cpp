#include "Student.hpp"

Student::Student(string name)
{
    this->name = name;
    this->currRoom = 0;
}

void Student::setRoom(Room* room)
{
    this->currRoom = room;
}