#include "Door.hpp"

Door::Door(string dirToRoomA, Room* roomA, string dirToRoomB, Room* roomB)
{
    this->dirToRoomA = dirToRoomA;
    this->dirToRoomB = dirToRoomB;
    this->roomA = roomA;
    this->roomB = roomB;
}