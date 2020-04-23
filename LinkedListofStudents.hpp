#ifndef LinkedListOfStudents_hpp
#define LinkedListOfStudents_hpp
#include "Student.hpp"
#include "StudentNode.hpp"
#include <iostream>

using namespace std;
class LinkedListOfStudents
{
    private: 
        StudentNode* head;
        

    public:
        int count;
        LinkedListOfStudents();
        void addFront(Student* s);
        Student* getAtIndex(int index);
        Student* removeAtIndex(int index);
        int indexOf(Student* s); 
};

#endif