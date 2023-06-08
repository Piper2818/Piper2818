#pragma once
#ifndef MYLIST_
#define MYLIST_
#include"Node.h"

template <class T>
class myList
{

public:
    node<T>* head;
    node<T>* temp;
    int size;
    
    myList() : head(nullptr), size(0) // contructor 
    {} 
    ~myList(); //deconstructor 
    void insert(T item);
    void remove();
    void find(); 
   

    bool isEmpty()
    {
        return size == 0;
    }
    int getSize() { return size; }
};
#endif

template <class T>
myList<T>:: ~myList() {

    while (!isEmpty())
        remove();
}




template <class T>
void myList<T>::insert(T item) //insert new node to list 
{

    
    node<T>* temp = new node<T>(item); 
    temp->next = head;
    head = temp;
    size++;

}
template <class T>
void myList<T>::remove() //remove item from list 
    {
        node <T>* temp;

        if (head != nullptr) 
        {
            
            temp = head;
            head = temp->next;
            size--;
        }
    }

template <class T>
void myList<T>::find() //search through the list for the word 
{ 
    for (temp = head; temp != nullptr; temp = temp->next)
    {
        if (temp->data.compare(T))// compare the dictionary word to the book word
        {
            return true; //what to return???
        }
        return false; 
    }


}
