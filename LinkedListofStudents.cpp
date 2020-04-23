#include "LinkedListOfStudents.hpp"

LinkedListOfStudents::LinkedListOfStudents()
{
    this->head = 0;
    this->count = 0;
}

void LinkedListOfStudents::addFront(Student* s)
{
    StudentNode* sn = new StudentNode(s);
    if(!this->head)
    {
        this->head = sn;
    }
    else
    {
        sn->setNextNode(this->head);
        this->head = sn;
    }
    this->count++;
}

Student* LinkedListOfStudents::getAtIndex(int index)
{
    
    if(index > this->count-1 || index < 0)
    {
        return 0;
    }
    else
    {
        StudentNode* currNode = this->head;
        for(int i = 0; i < index; i++)
        {
            currNode = currNode->getNextNode();
        }
        return currNode->getPayload();
    }
}

Student* LinkedListOfStudents::removeAtIndex(int index)
{
    
    if(!this->head || index < 0 || index > this->count - 1)
    {
        return 0;
    }
    else
    {
        Student* studentToReturn = 0;

        if(index == 0)
        {
            
            studentToReturn = this->head->getPayload();
            this->head = this->head->getNextNode();
        }
        else if(index == this->count - 1)
        {
            
            StudentNode* currNode = this->head;
            
            for(int i = 0; i < this->count-2; i++)
            {
                currNode = currNode->getNextNode();
            }
            studentToReturn = currNode->getNextNode()->getPayload();
            StudentNode* nodeToDelete = currNode->getNextNode();
            currNode->setNextNode(0);
            delete nodeToDelete;
        }
        else
        {
            StudentNode* currNode = this->head;
            for(int i = 0; i < index - 1; i++)
            {
                currNode = currNode->getNextNode();
            }
            studentToReturn = currNode->getNextNode()->getPayload();
            StudentNode* nodeToDelete = currNode->getNextNode();
            currNode->setNextNode(nodeToDelete->getNextNode());
            delete nodeToDelete;
        
        }
        this->count--;
        return studentToReturn;
    }
    
}

int LinkedListOfStudents::indexOf(Student* s)
{
    
    StudentNode* currNode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        if(currNode->getPayload()== s)
        {
            return i;
        }
        currNode = currNode->getNextNode();
    }
    cout<< "Not Found in List";
}