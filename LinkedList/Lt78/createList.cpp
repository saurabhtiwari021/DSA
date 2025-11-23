// creating linked list
#include <iostream>
using namespace std;

class Node
{ 
    public: 
   int data;
   Node* next;

   Node(int value) // constructor 
   {
    data = value;
    next = NULL;
   }


};

int main()
{
    // Node A1(4); // static
    Node* head;
    head = new Node(4); // dynamic creation of list

    cout<<head->data<<endl;
    cout<<head->next<<endl;
}