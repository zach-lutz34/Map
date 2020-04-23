#include "Room.hpp"

Room::Room(string title)
{
    this->title = title;
    this->currNumOfDoors = 0;
}

void Room::addDoor(Door* door)
{
    int i = this->currNumOfDoors;
    this->collectionOfDoors[i] = door;
    this->currNumOfDoors++;
}