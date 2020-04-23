#include <iostream>
#include "Student.hpp"
#include "Room.hpp"
#include "Door.hpp"
#include "StudentNode.hpp"
#include "LinkedListOfStudents.hpp"
using namespace std;

int main()
{
    cout << "hello world\n";
    Student* zach = new Student("Zach");
    Student* josh = new Student("Josh");
    Student* eddie = new Student("Eddie");
    Student* michael = new Student("Michael");
    Student* clancy = new Student("Clancy");
    Student* jarrett = new Student("Jarrett");
    LinkedListOfStudents* list = new LinkedListOfStudents();
    list->addFront(zach);
    list->addFront(josh);
    list->addFront(eddie);
    list->addFront(michael);
    list->addFront(clancy);

    cout << list->indexOf(clancy) << "\n";
    cout << list->indexOf(michael) << "\n";
    cout << list->indexOf(eddie) << "\n";
    cout << list->indexOf(jarrett) << "\n";
    cout << list->indexOf(zach) << "\n";
    cout << list->indexOf(josh) << "\n";
    Student* a = list->removeAtIndex(4);
    cout << list->indexOf(zach) << "\n";
    list->addFront(zach);
    cout << list->indexOf(zach) << "\n";
    cout << list->indexOf(josh) << "\n";
    cout << "hello world\n";
}