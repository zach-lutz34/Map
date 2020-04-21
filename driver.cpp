#include "iostream"
#include "Room.cpp"
#include "Door.cpp"
#include "Student.cpp"

int main()
{
    Student* zach = new Student(firDoor);
    Door* firstDoor = new Door("Living Room");
    Room* livingRoom = firDoor->getRoom();
    Door* secDoor = new Door("Kitchen");
    livingRoom->addDoor(secDoor);
    Room* kitchen = livingRoom->getDoor(2)->getRoom();
    Door* thrDoor = new Door("Dining Room");
    kitchen->addDoor(thrDoor);
    zach->travel();
}