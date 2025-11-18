#include <iostream>
#include "Node.hpp"
using namespace std;

class LinkedList
{
private:
    Node* head;
public:
    LinkedList(){
        head=nullptr;
    }

    void insert_beginning(int value){
        Node* newNode=new Node(value);
        newNode->next=head;
        head=newNode;
    }

    void insert_end(int value){
        Node* newNode=new Node(value);
        if (head==nullptr){
            head=newNode;
            return;
        }
        Node* temp =head;
        while (temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }

    void inser_middle(int value,int position){
        if(position==0){
            insert_beginning(value);
            return;
        }
        Node* newNode=new Node(value);
        Node* temp=head;
        for (int i = 0; temp != nullptr && i<position-1; i++)
        {
            temp=temp->next;
        }
        if (temp==nullptr){
            cout<<"Position to insert is bigger than length of linked list"<<endl;
            return;
        }
        newNode->next=temp->next;
        temp->next=newNode;   
    }
};