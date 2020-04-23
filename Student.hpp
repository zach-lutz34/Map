#ifndef Student_hpp
#define Student_hpp

#include <string>

using namespace std;

class Room;
class Student
{
    private:
        
        Room* currRoom;

    public:
        string name;
        Student(string name);
        void setRoom(Room* room);
};

#endif