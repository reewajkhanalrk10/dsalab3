#include <iostream>
#include "arrayqueue.cpp"
#include "linkedlistqueue.cpp"

using namespace std;

int main(){

    cout<<"--> Array Queue\n\n";
    arrayqueue lab3(5);

    cout<<"--> Checking isEmpty\n\n";
    if(lab3.isEmpty()){
        cout<<"--> Queue is empty\n\n";
    }
    else{
        cout<<"--> Queue is not empty\n\n";
    }

    cout<<"--> Adding 3 to the queue\n\n";
    lab3.enQ(333);
    if(lab3.isEmpty()){
        cout<<"--> Queue is empty\n\n";
    }else{
        cout<<"--> Queue is not empty\n\n";
    }

    cout<<"--> Filling the queue\n\n";
    lab3.enQ(4444);
    lab3.enQ(55555);
    lab3.enQ(666666);
    lab3.enQ(7777777);
    cout<<"--> Checking isFull\n\n";
    if(lab3.isFull()){
        cout<<"--> Queue is full\n\n";
    }else{
        cout<<"--> Queue is not full\n\n";
    }

    cout<<"--> Removing a data from the queue\n\n -->";
    cout<<lab3.dQ()<<" is removed from the list\n\n";

    cout<<"--> Again checking isFull\n\n";
    if(lab3.isFull()){
        cout<<"--> Queue is full\n\n";
    }else{
        cout<<"--> Queue is not full\n\n";
    }

    cout<<"--> The first element in the queue is "<<lab3.viewFront()<<endl;
    cout<<"--> The last element in the queue is "<<lab3.viewBack()<<endl;

    cout<<"--> Linked List Queue\n\n";
    linkedlistqueue linkvalue;
    cout<<"--> Checking isEmpty\n\n";
    if(linkvalue.isEmpty()){
        cout<<"--> Queue is empty\n\n";
    }else{
        cout<<"--> Queue is not empty\n\n";
    }

    cout<<"--> Adding 8 to the queue\n\n";
    linkvalue.enQ(88888888);
    if(linkvalue.isEmpty()){
        cout<<"--> Queue is empty\n\n";
    }else{
        cout<<"--> Queue is not empty\n\n";
    }

    cout<<"--> Filling the queue\n\n";
    linkvalue.enQ(999);
    linkvalue.enQ(1010);
    linkvalue.enQ(1111);
    linkvalue.enQ(1212);
    
    cout<<"--> Removing a data from the queue\n\n-->";
    cout<<linkvalue.dQ()<<" is removed from the list\n\n";

    cout<<"--> Not checking isFull as linkedlist can be expanded as per the need\n\n";
    

    cout<<"--> The first element in the queue is "<<linkvalue.viewFront()<<endl<<endl;
    cout<<"--> The last element in the queue is "<<linkvalue.viewBack()<<endl<<endl;

    return 0;
}