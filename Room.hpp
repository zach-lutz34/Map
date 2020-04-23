#ifndef Room_hpp
#define Room_hpp

#include <string>

class Door; 
class Student;

using namespace std;

class Room
{
    private:
        string title;
        Door* collectionOfDoors[10];
        int currNumOfDoors;
    
    public:
        Room(string title);
        void addDoor(Door* door);

};
#endif