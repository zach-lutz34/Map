#include "Room.hpp"
#include <string>

#ifndef Door_hpp
#define Door_hpp

class Room;

using namespace std;

class Door
{
    private:
        string dirToRoomA;
        string dirToRoomB;
        Room* roomA;
        Room* roomB;

    public:
        Door(string dirToRoomA, Room* roomA, string dirToRoomB, Room* roomB);

};
#endif