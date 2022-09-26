#include <iostream>
#include "linkedlist.h"
using namespace std;

bool LinkedList ::isEmpty()
{
    node *temp = head; 
    if (temp == NULL)
    {
        cout << "True: List is Empty \n";
        return true;
    }
    else
    {
        cout << "False: List is not Empty \n\n";
        return false;
    }
}

void LinkedList ::addtohead(int data)
{
    node *Newnode = new node;
    Newnode->data = data;
    Newnode->next = head;
    head = Newnode;
    if (tail == NULL)
    {
        tail = Newnode;
    }

}

void LinkedList ::addToTail(int data)
{
    node *Newnode = new node;
    Newnode->data = data;
    Newnode->next = NULL; 
    node *temp = head;    
    
    if (head == NULL)
    {
        head = Newnode;
    }

    else
    {
        while (temp->next != NULL)
        {                      
            temp = temp->next; 
        }
        temp->next = Newnode; 
    }
}

void LinkedList ::add(int data, node *predecessor)
{
    node *Newnode = new node;
    Newnode->data = data;
    node *temp = head; 
    if (temp == NULL)
    {
        cout << "Error Previous node can't be NULL \n";
        return;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp == predecessor)
            {
                Newnode->next = predecessor->next;
                predecessor->next = Newnode;
                return;
            }
            temp = temp->next;
        }
    }
}

void LinkedList ::removeFromHead()
{
    node *temp = head; 
    head = head->next; 
    delete temp;       
}

void LinkedList ::remove(int data)
{
    int check = data;
    node *Previousnode;
    if (head == NULL && head->data == check)
    {
        Previousnode = head;
        head = head->next;
        delete Previousnode;
    }

    node *temp = head; 
    if (temp->next != NULL)
    {
        while (temp->next != NULL)
        {
            if (temp->next->data == check)
            {
                Previousnode = temp->next;
                temp->next = temp->next->next;
                delete Previousnode;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    else
    {
        cout << "Error! Warning :You can't delete from EMPTY List \n";
    }
}

node *LinkedList ::retrieve (int data)
{
    int extract = data;
    node *temp = head;
    node *summon;
    int count = 1;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            if (temp->data == extract)
            {
                summon = temp;
                return summon;
            }
            temp = temp->next;
            count++;
        }
        cout << extract << " not found in the list \n";
    }
    return nullptr;
}

bool LinkedList ::search(int data)
{
    int check = data;
    node *temp = head;
    int count = 0;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            if (temp->data == check)
            {
                count++;
            }
            temp = temp->next;
        }
    }
    if (count == 0)
    {
        cout << check << " not found in the list"
             << " returning False. \n\n";
        return false;
    }
    else
    {
        cout << check << " found in the list"
             << " returning True.\n\n";
        return true;
    }
}

void LinkedList ::traverse()
{
    node *temp = head; 
    if (temp != NULL)
    {
        cout << "Your Linked List contains: ";
        while (temp != NULL)
        {                              
            cout << temp->data << " "; 
            temp = temp->next;
        }
        cout << endl
             << endl;
    }
    else
    {
        cout << "Warning THe LIST is EMPTY \n";
    }
}
